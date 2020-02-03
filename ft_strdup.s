global	_ft_strdup
section	.text
extern  _malloc
_ft_strdup:							; str stocked in rdi.
		cmp		rdi, 0
		jz		exit_fail
		xor		rcx, rcx			; counter = 0.
		xor		rbx, rbx
len:
		cmp		byte[rdi + rcx], 0	; comparison between str and 0 (end of string).
		je		mem_alloc			; test if previous comparison is equal to 0. If yes, jump to malloc.
		inc		rcx					; counter++.
		jmp		len					; loop.
mem_alloc:
		inc		rcx					; counter = ft_strlen + 1 for \0.
		push	rdi					; save str (stored in rdi).
		mov		rdi, rcx			; move str length to rdi for parameter in malloc.
		call	_malloc
		cmp		rax, 0				; test if malloc failed.
		jz		exit_fail
		pop		rdi					; restore str.
		xor		rcx, rcx			; counter = 0.
dup:
		cmp		byte[rdi + rcx], 0	; check if we are at the end of the string.
		mov		bl, byte[rdi + rcx]
		mov		byte[rax + rcx], bl
		je		end					; if end of the string, end of loop.
		inc		rcx					; counter++.
		jmp		dup					; loop.
exit_fail:
		xor		rax, rax			; returns NULL in case of error.
end:
		ret							; end of program, returns rax.

; Use of extern functions ft_strlen and ft_strcpy
; extern	_ft_strlen
; extern	_ft_strcpy
; _ft_strdup:
; 		call	_ft_strlen	; rax = len of str.
; 		push	rdi			; save str (stored in rdi).
; 		inc		rax			; rax++ for \0.
; 		mov		rdi, rax	; move len to rdi for paramter in malloc.
; 		call	_malloc
; 		cmp		rax, 0		; test if malloc failed.
; 		jle		exit_fail
; 		pop		rdi			; restore str.
; 		mov		rsi, rdi
; 		mov		rdi, rax
; 		call	_ft_strcpy
; 		ret
; exit_fail:
; 		xor		rax, rax	; returns NULL in case of error.
; 		ret
