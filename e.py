#!/usr/bin/env python3

import sys



from pwn import *



context.update(arch='x86_64', os='linux')

context.terminal = ['tmux', 'splitw', '-h']

    



###### LOOK AT ME! ########

''' Put Your GTID (9 digit numeric ID which looks like 901234567) inside the quotes in line below! '''

USERNAME = '903785152'

payload  = USERNAME

###########################







if USERNAME != '':

    with open('../user.txt','w') as f:

        f.write(USERNAME)



    if (len(sys.argv)<= 1):

        p = process("./flag")

    elif (sys.argv[1] == "dbg"):

        p = gdb.debug(["./flag"],'''

        unset env LINES

        unset env COLUMNS

        break main

        continue

        ''')





    p.sendline(payload)

    p.interactive()



else:

    print("You Need to Enter your GTID first! Please read writeup/instructions on how to do this!")

