	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 4
	.globl	__Z18calculateRectangleiiPiS_   ; -- Begin function _Z18calculateRectangleiiPiS_
	.p2align	2
__Z18calculateRectangleiiPiS_:          ; @_Z18calculateRectangleiiPiS_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	w0, [sp, #28]
	str	w1, [sp, #24]
	str	x2, [sp, #16]
	str	x3, [sp, #8]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	mul	w8, w8, w9
	ldr	x9, [sp, #16]
	str	w8, [x9]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	add	w9, w8, w9
	mov	w8, #2
	mul	w8, w8, w9
	ldr	x9, [sp, #8]
	str	w8, [x9]
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	.cfi_def_cfa_offset 64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	str	w8, [sp, #24]                   ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	x9, sp
	sub	x8, x29, #8
	str	x8, [x9]
	sub	x8, x29, #12
	str	x8, [x9, #8]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_scanf
	ldur	w0, [x29, #-8]
	ldur	w1, [x29, #-12]
	sub	x2, x29, #16
	sub	x3, x29, #20
	bl	__Z18calculateRectangleiiPiS_
	ldur	w8, [x29, #-16]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldur	w9, [x29, #-20]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	ldr	w0, [sp, #24]                   ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Enter length and width: "

l_.str.1:                               ; @.str.1
	.asciz	"%d %d"

l_.str.2:                               ; @.str.2
	.asciz	"Area: %d, Perimeter: %d\n"

.subsections_via_symbols
