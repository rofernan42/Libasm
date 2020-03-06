; Check syscall_sw.h and Linux Syscall reference for system call write and exit.
; The high order bits represent the class (2 is class Unix) and low order bits are the syscall number within that class.

global	_ft_read
section	.text
_ft_read:
		mov		rax, 0x2000003	; system call read = 0x03.
		syscall					; 64 bits version of int 0x80
		jc		error
		ret
error:
		mov		rax, -1
		ret
