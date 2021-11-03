a.out : clientcsp.o server.o
	gcc clientcsp.o server.o
clientcsp.o : clientcsp.c header.h
	gcc -c clientcsp.c
server.o : server.c header.h
	gcc -c server.c

