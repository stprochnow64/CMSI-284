import sys

instructions = 'LOAD STORE IN OUT ADD SUB MUL DIV MOD AND OR XOR JUMP JZ JLZ JGZ'.split()

def assemble_label():
    pass

def assemble_number():
    pass
def assemble_instruction():
    if len(words) == 1:
        raise ValueError('No argument to instruction')
    if not words[1].isdigit:
        raise ValueError('Instruction argument must be a number')
    if len(words) > 2 and not words[2].startswith(;):
        raise ValueError('Extra stuff on line')
    operand = int(words[1])
    if operand >= 2** 28:
        raise ValueError('Operand too large')



def assemble(line):
    words = line.split()
    if not words:
        return ''
    elif words[0].startswith(';'):
        return ''
    elif words[0].endswith(':'):
        handleLabel()
    elif words[0].isdigit():
        handle_number()
    elif words[0] in instructions:
        handle_insturction()
    else:
        raise ValueError('Illegal syntax')
    return words


for line in sys.stdin:
    print(assemble(line.rstrip().lower()))
