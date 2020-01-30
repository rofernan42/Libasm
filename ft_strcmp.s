global	_ft_strcmp
section	.text
_ft_strcmp:
				; xor		rdx, rdx			;
				; xor		rcx, rcx
; copybyte:
				; cmp		rdi, rsi
				; jz		equal
				; jg		sup
				; jmp		inf			;
; equal:
				mov		rax, [rdi]
				sub		rax, [rsi]			;
				ret							;
