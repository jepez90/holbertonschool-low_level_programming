section .text
    global _start

section .data
	text db "Hello, Holberton", 10

section .text
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, 17
	syscall

	mov rax, 0
	mov rdi, 0
	syscall
