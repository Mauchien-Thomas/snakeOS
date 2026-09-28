[BITS 32]

global _start

export kernel_main

start:
     call kernel_main

     jmp $

times 512 - ($ - $$) db 0
