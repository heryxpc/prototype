# Prototype
Prototype to evaluate abstract interpretation and bounded model checking integration

## Prerequisites
1. Git clone or direct download pycparser version that can handle comments from: [https://bitbucket.org/barel/pycparser/downloads]
2. Download and compile latest version of Pagai from: [http://pagai.forge.imag.fr/]
3. Install clang, a prerequisite to perform abstract interpretation analysis with Pagai.
4. Install CBMC 5.1 [http://www.cprover.org/cbmc/]
5. Donwload version 1.0 from Lazy-CSeq [http://users.ecs.soton.ac.uk/gp4/cseq/cseq.html]
5. Ensure sed script interpreter is installed to perform filtering of non valid C parsing characters.
6. Ensure running version of python is 2.x and not 3.x
7. Update scripts prototypex.x.py to set the correct paths where pagai and pycparser from barel where installed, for example:
  + parserpath = '../path/to/pycparser/directory'
  + pagaipath = '../path/to/pagai/binary/directory/pagai'


### The script can create different files for each step of the process:
+ *<input>.bc – Represents the intermediate representation (IR) on binary format required as input for PAGAI. 

+ *<input>_anno.c –Represents the annotated C file with invariants generated. 

+ *<input>_pyc.c – Represents the input C file required for correct parsing with pycparser.

+ *<input>_assume.c – Represents the input C file injected with “assume” statements.

+ *<input>_cbmc.c – Represents the input C file re-transformed with original dependencies to be verified by CBMC.

+ *<input>_cex – File with CBMC counterexample from verification, or logging of successful validation.

+ *<input>_.stderr – File with the stderr output from a command execution e.g. pagai, cbmc, clang.