; Check syscall_sw.h and Linux Syscall reference for system call write and exit.
; The high order bits represent the class (2 is class Unix) and low order bits are the syscall number within that class.

; fd value stocked in rdi.
; buffer stocked in rsi.
; nbyte value stocked in rdx.

global	_ft_read
section	.text
_ft_read:
		mov		rbx, rsi		; save rsi in rbx
		xor		rsi, rsi		; put rsi to 0 as rsi will be used to store the data about the file.
		mov		rax, 0x20000BD	; system call fstat = 0xBD. fstat tests the state of the file.
		syscall
		cmp		rax, 9			; rax returns 9 in case of bad fd, so we move -1 to rax instead as does the real read function.
		jz		error
		mov		rsi, rbx		; restore buffer in rsi.
		mov		rax, 0x2000003	; system call read = 0x03.
		syscall					; 64 bits int 0x80
		ret
error:
		mov		rax, -1
		ret
