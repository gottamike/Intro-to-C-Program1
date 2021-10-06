main.o: main.c
	gcc -c -Wall main.c

highestC.o: highestC.c
	gcc -c -Wall highestC.c

highestB.o: highestB.c
	gcc -c -Wall highestB.c

highestA.o: highestA.c
	gcc -c -Wall highestA.c

countA.o: countA.c
	gcc -c -Wall countA.c

countB.o: countB.c
	gcc -c -Wall countB.c

countC.o: countC.c
	gcc -c -Wall countC.c

swap.o: swap.c
	gcc -c -Wall swap.c

printing.o: printing.c
	gcc -c -Wall printing.c

sorting.o: sorting.c
	gcc -c -Wall sorting.c

program1: main.o highestC.o highestB.o highestA.o countA.o countB.o countC.o swap.o printing.o sorting.o
	gcc -o program1 main.o highestC.o highestB.o highestA.o countA.o countB.o countC.o swap.o printing.o sorting.o
