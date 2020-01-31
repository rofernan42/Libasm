global	_ft_strlen
section	.text
_ft_strlen:
			xor		rax, rax			; put rax to 0 (same as mov rax, 0 but more optimized).

countbytes:
			cmp		byte[rdi + rax], 0	; comparison between destination address and 0 (end of string).
			je		endloop				; test if previous comparison is equal to 0. If yes, jump to endloop.
			inc		rax					; rax <- rax + 1.
			jmp		countbytes			; loop.

endloop:
			ret							; end of program. Returns rax value.
