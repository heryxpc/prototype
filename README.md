# Prototype
Prototype for abstract interpretation annotation handler

## How it works
Script protoype transforms comments annotations generated in while statements from pagai to assume statement functions that shall reduce the time consumption in a static analysis.

## Prerequisites
1. Git clone or direct download pycparser version that can handle comments from: [https://bitbucket.org/barel/pycparser/downloads]
2. Download and compile latest version of Pagai from: [http://pagai.forge.imag.fr/]
3. Install clang, a prerequisite to perform abstract interpretation analysis with Pagai.
4. Ensure sed script interpreter is installed to perform filtering of non valid C parsing characters.
5. Ensure running version of python is 2.x and not 3.x
6. Update script prototype_0.1.py on lines 5 and 6 to set the correct paths where pagai and pycparser from barel where installed:
*parserpath = '../path/to/pycparser/directory'
*pagaipath = '../path/to/pagai/binary/directory/pagai'

## How to use it.
Copy into directory test2 the file to be transformed and then call python prototype_0.1.py followed by the file name. For example:  
+ cp test2/results_13Jul2015/gopan.c test2/gopan.c
+ cd test2
+ python prototype_0.1.py gopan.c

### The script will create different files for each step of the process:
  *gopan.c.bc* - Contains the translation from C to llvm from clang execution
  *tmp_gopan.c* - Temprary C file with annotations created from pagai output. Includes non valid characters for parsing.
  *anno_gopan.c* - Annotated C code from original file without invalid characters. This is filtered using sed script sed_test.py.
  *lextab.py* - PLY (python lex and yacc implementation) autogenerated file
  *yacctab.py* - PLY (python lex and yacc implementation) autogenerated file
  *assume_anno_gopan.c* - Original file including assume statements derived from invariants.
  *assume_anno_gopan.c.bc* - Translation from C to llvm to analyze with pagai.
  *tmp_assume_anno_gopan.c* - Temporary c file
  *anno_assume_anno_gopan.c* - New annotated C code from pagai output. Includes both invariants and assume statements.