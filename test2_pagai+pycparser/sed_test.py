import subprocess
from cStringIO import StringIO

source_code = 'gopan_annotated.c'

input = StringIO(source_code) # source_code is a string with the source code.
output = StringIO()

process = subprocess.Popen(['sed', 'remccoms3.sed'],
    stdin=input, stdout=output)
return_code = process.wait()

stripped_code = output.getvalue()