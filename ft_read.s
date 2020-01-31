; Check syscall_sw.h for system call read.
; The high order bits represent the class (2 is class Unix) and low order bits are the syscall number within that class.

global	_ft_read
section	.text
_ft_read:
		; fd value stocked in rdi.
		; buffer stocked in rsi.
		; nbyte value stocked in rdx.
		mov		rax, 0x2000003	; system call write = 4.
		syscall
		ret
