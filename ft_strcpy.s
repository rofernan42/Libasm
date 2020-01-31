global	_ft_strcpy
section	.text
_ft_strcpy:						; rdi = dst and rsi = src
		xor		rcx, rcx			; put rcx to 0.
		xor		rbx, rbx			; put temp var to 0.
copybyte:
		cmp		byte[rsi + rcx], 0	; check if we are at the end of the string.
		mov		bl, byte[rsi + rcx]	; bl <- value pointed by source register.
		mov		byte[rdi + rcx], bl	; value pointed by destination register <- bl.
		je		endloop				; if end of the string, end of loop.
		inc		rcx					; rcx <- rcx + 1.
		jmp		copybyte			; loop.
endloop:
		mov		rax, rdi			; rax <- destination string
		ret							; end of program, returns rax
