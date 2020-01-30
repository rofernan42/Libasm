global	_ft_strlen
section	.text
_ft_strlen:
				xor		rax, rax

countbytes:
				cmp		byte[rdi + rax], 0
				je		endloop
				inc		rax
				jmp		countbytes

endloop:
				ret
