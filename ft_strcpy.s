global	_ft_strcpy
section	.text
_ft_strcpy:
				xor		rdx, rdx			; put rdx to 0.
copybyte:
                cmp		byte[rsi + rdx], 0	; check if we are at the end of the string.
				je		endloop				; if yes, end of loop.
				mov     rax, [rsi + rdx]	; rax <- value pointed by source register.
				mov		[rdi + rdx], rax	; value pointed by destination register <- rax.
                inc     rdx					; rdx <- rdx + 1.
				jmp		copybyte			; loop.
endloop:
				mov		rax, rdi			; rax <- destination string
				ret							; end of program, returns rax
