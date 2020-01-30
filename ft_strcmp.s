global	_ft_strcmp
section	.text
_ft_strcmp:
				xor		rcx, rcx			;
				xor		rax, rax
compbyte:
				cmp		byte[rsi + rcx], 0
				jz		endloop
				cmp		byte[rdi + rcx], 0
				jz		endloop		;
				inc		rcx
				jmp		compbyte
endloop:
				mov		al, [rdi + rcx]
				sub		al, [rsi + rcx]
				ret
; inf:
; 				sub		al, [rdi + rcx]
; 				ret
; sup:
; 				sub		al, [rdi + rcx]
; 				ret