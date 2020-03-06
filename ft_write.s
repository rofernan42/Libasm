; Check syscall_sw.h and Linux Syscall reference for system call write and exit.
; The high order bits represent the class (2 is class Unix) and low order bits are the syscall number within that class.

global	_ft_write
section	.text
_ft_write:
		mov		rax, 0x2000004	; system call write = 0x04.
		syscall					; 64 bits version of int 0x80
		jc		error
		ret						; returns rax (= number of characters printed).
error:
		mov		rax, -1
		ret
