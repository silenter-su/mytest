all:test test_and color_test
	
test:test.c
	gcc -g -O0 test.c -o test -I/usr/include/ -L/usr/local/lib/ -lpcap -lpthread
test_and:test_and.c
	gcc test_and.c -o test_and
color_test:color_test.c
	gcc color_test.c -o color_test
