extern printf

section .text
	global	main

main:
	mov		edi,msg
	mov		eax,0
	call	printf

section .data
	msg db	'Hello, Holberton',0xa
