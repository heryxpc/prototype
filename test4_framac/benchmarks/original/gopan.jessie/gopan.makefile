# this makefile was automatically generated; do not edit 

TIMEOUT ?= 10

DP ?= why-dp -timeout $(TIMEOUT)
WHYEXEC ?= why
GWHYEXEC ?= gwhy-bin
WHYLIB ?= /home/heryxpc/.opam/system/lib/why

USERWHYTWOOPT=
USERWHYTHREEOPT=
WHY=WHYLIB=$(WHYLIB) $(WHYEXEC) $(WHYOPT) $(USERWHYTWOOPT) -explain -locs gopan.loc

GWHY=WHYLIB=$(WHYLIB) $(GWHYEXEC) $(WHYOPT) $(USERWHYTWOOPT) -explain -locs gopan.loc

JESSIELIBFILES ?= $(WHYLIB)/why/jessie.why
JESSIE3CONF ?= $(WHYLIB)/why3/why3.conf

COQDEP = coqdep

.PHONY: all coq pvs simplify vampire cvcl harvey smtlib zenon

all: simplify/gopan_why.sx

project: why/gopan.wpr

why/%.wpr:  WHYOPT=--project -dir why
why/%.wpr: why/%.why
	@echo 'why --project [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

goals: why/gopan_ctx.why

why/%_ctx.why: WHYOPT=--multi-why -dir why
why/%_ctx.why: why/%.why
	@echo 'why --multi-why [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

coq: coq/gopan_why.vo

coq/gopan_why.v: WHYOPT=-coq -dir coq -coq-preamble "Require Export jessie_why." -coq-tactic "intuition"
coq/gopan_why.v: why/gopan.why
	@echo 'why -coq [...] why/gopan.why' && $(WHY) $(JESSIELIBFILES) why/gopan.why && rm -f coq/jessie_why.v

coq-goals: goals coq/gopan_ctx_why.vo
	for f in why/*_po*.why; do make -f gopan.makefile coq/`basename $$f .why`_why.v ; done

coq/gopan_ctx_why.v: WHYOPT=-no-pervasives -coq -dir coq -coq-preamble "Require Export jessie_why." -coq-tactic "intuition"
coq/gopan_ctx_why.v: why/gopan_ctx.why
	@echo 'why -coq [...] why/gopan_ctx.why' && $(WHY) why/gopan_ctx.why

coq/%_why.v: WHYOPT=-no-pervasives -coq -dir coq -coq-preamble "Require Export gopan_ctx_why." -coq-tactic "intuition"
coq/%_why.v: why/%.why
	@echo 'why -coq [...] why/$*.why' && $(WHY) why/gopan_ctx.why why/$*.why

coq/%.vo: coq/%.v
	coqc -I coq $<
coq/%_po_why.vo: coq/gopan_ctx_why.vo

pvs: pvs/gopan_why.pvs

pvs/%_why.pvs: WHYOPT=-pvs -dir pvs -pvs-preamble "IMPORTING why@jessie"
pvs/%_why.pvs: why/%.why
	$(WHY) $(JESSIELIBFILES) why/$*.why

pvs/jessie_why.pvs:WHYOPT=-pvs -dir pvs -pvs-preamble "IMPORTING why@why"
pvs/jessie_why.pvs:
	$(WHY) $(JESSIELIBFILES)

isabelle: isabelle/gopan_why.thy

isabelle/%_why.thy: WHYOPT=-isabelle -dir isabelle -isabelle-base-theory jessie_why
isabelle/%_why.thy: why/%.why
	$(WHY) $(JESSIELIBFILES) why/$*.why
	cp -f /home/heryxpc/.opam/system/lib/why/isabelle/jessie_why.thy isabelle/

simplify: simplify/gopan_why.sx
	@echo 'Running Simplify on proof obligations' && ($(DP) $^)

simplify/%_why.sx: WHYOPT=-simplify -dir simplify
simplify/%_why.sx: why/%.why
	@echo 'why -simplify [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

vampire: vampire/gopan_why.vp
	@echo 'Running Vampire on proof obligations' && ($(DP) $^)

vampire/%_why.vp: WHYOPT=-vampire -dir vampire
vampire/%_why.vp: why/%.why
	@echo 'why -vampire [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

alt-ergo ergo: why/gopan_why.why
	@echo 'Running Alt-Ergo on proof obligations' && ($(DP) $^)

why/%_why.why: WHYOPT=-alt-ergo -dir why
why/%_why.why: why/%.why
	@echo 'why -alt-ergo [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

gappa: gappa/gopan_why.gappa
	@echo 'Running Gappa on proof obligations' && ($(DP) $^)

gappa/%_why.gappa: WHYOPT=-gappa -dir gappa
gappa/%_why.gappa: why/%.why
	@echo 'why -gappa [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

cvcl: cvcl/gopan_why.cvc

	@echo 'Running CVC Lite on proof obligations' && ($(DP) $^)

cvcl/%_why.cvc: WHYOPT=-cvcl -dir cvcl
cvcl/%_why.cvc: why/%.why
	@echo 'why -cvcl [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

harvey: harvey/gopan_why.rv
	@echo 'Running haRVey on proof obligations' && ($(DP) $^)

harvey/%_why.rv: WHYOPT=-harvey -dir harvey
harvey/%_why.rv: why/%.why
	@echo 'why -harvey [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

zenon: zenon/gopan_why.znn
	@echo 'Running Zenon on proof obligations' && ($(DP) $^)

zenon/%_why.znn: WHYOPT=-zenon -dir zenon
zenon/%_why.znn: why/%.why
	@echo 'why -zenon [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

smtlib: smtlib/gopan_why.smt
	@echo 'Running Z3 on proof obligations' && ($(DP) $^)

smtlib/%_why.smt:  WHYOPT=-smtlib --encoding sstrat --exp goal -dir smtlib
smtlib/%_why.smt: why/%.why
	@echo 'why -smtlib [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

z3: smtlib/gopan_why.smt
	@echo 'Running Z3 on proof obligations' && ($(DP) -smt-solver z3 $^)

yices: smtlib/gopan_why.smt
	@echo 'Running Yices on proof obligations' && ($(DP) -smt-solver yices $^)

cvc3: smtlib/gopan_why.smt
	@echo 'Running CVC3 on proof obligations' && ($(DP) -smt-solver cvc3 $^)

smtlib-v1: smtlib-v1/gopan_why.smt
smtlib-v1/%_why.smt:  WHYOPT=-smtlib --smtlib-v1 --encoding sstrat --exp goal -dir smtlib-v1
smtlib-v1/%_why.smt: why/%.why
	@echo 'why -smtlib [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why

verit: smtlib-v1/gopan_why.smt
	@echo 'Running VeriT on proof obligations' && ($(DP) -smt-solver verit $^)

gui stat: gopan.stat

%.stat: why/%.why
	@echo 'gwhy-bin [...] why/$*.why' && $(GWHY) $(JESSIELIBFILES) why/$*.why

why3: why/gopan_why3.why
why/%_why3.why:  WHYOPT=-why3
why/%_why3.why: why/%.why
	@echo 'why -why3 [...] why/$*.why' && $(WHY) $(JESSIELIBFILES) why/$*.why
why3ml: gopan.mlw
	 why3 $(USERWHYTHREEOPT) --extra-config $(JESSIE3CONF) $<

why3ide: gopan.mlw
	 why3 ide $(USERWHYTHREEOPT) --extra-config $(JESSIE3CONF) $<

why3replay: gopan.mlw
	 why3 replay $(USERWHYTHREEOPT) --extra-config $(JESSIE3CONF) $<

-include gopan.depend

depend: coq/gopan_why.v
	-$(COQDEP) -I coq coq/gopan*_why.v > gopan.depend

clean:
	rm -f coq/*.vo

