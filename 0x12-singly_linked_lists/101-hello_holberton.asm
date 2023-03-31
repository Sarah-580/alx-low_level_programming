global main
extern printf

section .data
	hello db "Hello, Holberton", 10, 0

section .text
main:
	push rbp
	mov rbp, rsp

	lea rdi, [hello]
	xor esi, esi
	mov eax, 0
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
