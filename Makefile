all: rect.O3 rect.O0 rect.debug
all: rect.O3.strip rect.O0.strip rect.debug.strip

rect.O3: rect.cc
	clang $< -o $@ -O3

rect.O0: rect.cc
	clang $< -o $@ -O0

rect.debug: rect.cc
	clang $< -o $@ -g -O0

%.strip: %
	cp $< $@
	strip $@
