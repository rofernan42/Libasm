; Check syscall_sw.h for system call write and exit.
; The high order bits represent the class (2 is class Unix) and low order bits are the syscall number within that class.

global	_ft_write
section	.text
_ft_write:						
		; fd value stocked in rdi.
		; character/string stocked in rsi.
		; nbyte value stocked in rdx.
		mov rax, 0x2000004	; system call write = 4.
		syscall				; invoke the kernel.
		ret					; returns rax (= number of characters printed).
