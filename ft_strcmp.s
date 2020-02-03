global	_ft_strcmp
section	.text
_ft_strcmp:
		xor		rcx, rcx				; rcx <- 0
		xor		rbx, rbx
		xor		rdx, rdx
compbyte:								; rdi = s1, rsi = s2.
		mov		bl, byte[rdi + rcx]		; store str[i] in tmp.
		mov		dl, byte[rsi + rcx]
		cmp		byte[rdi + rcx], 0		; check if end of string s1.
		jz		endloop
		cmp		byte[rsi + rcx], 0		; check if end of string s2.
		jz		endloop
		cmp		bl, dl					; compare if s1[i] = s2[i].
		jne		endloop					; if not end of function.
		inc		rcx						; rcx++
		jmp		compbyte				; loop.
endloop:
		movzx	rax, byte[rdi + rcx]	; movzx moves s1 in rax and extends with 0.
		movzx	rbx, byte[rsi + rcx]	; same in rbx.
		sub		rax, rbx				; rax <- s1 - s2.
		ret								; return rax.
