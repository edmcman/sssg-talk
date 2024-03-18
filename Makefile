all: rect.O3 rect.O0 rect.debug

rect.O3: rect.cc
	clang $< -o $@ -O3

rect.O0: rect.cc
	clang $< -o $@ -O0

rect.debug: rect.cc
	clang $< -o $@ -g -O0
