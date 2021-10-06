#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// all my functions 
void highestC(int[][4], int);
void highestB(int[][4], int);
void highestA(int[][4], int);
int countA(int[][4], int);
int countB(int[][4], int);
int countC(int[][4], int);
void swap(int[10][4], int, int);
void printing(int[], int);
void sorting(int[10][4], int);



// main method
int main(int argc, char *argv[] ){
	// insures that you can only have one command line argument
	if (argc > 2 ) {
		printf("Too many program arguments supplied \n");
		return 0;
	}
	
	// here is my 2d array	
	int dynamic = atoi(argv[1]);
	int sets[dynamic][4];

	// creating some variables for reading the file	
	char line[20];
	char *token; 

	int i = 0;
	// reading the file line by line
	while (fgets(line, 20, stdin) != NULL){
		token = strtok(line, ".");
		sets[i][0] = atoi(token);
		// putting each section of the ip into the 2d array
	
		token = strtok(NULL, ".");
		sets[i][1] = atoi(token);
	
		token = strtok(NULL, ".");
		sets[i][2] = atoi(token);
        
		token = strtok(NULL, ".");
		sets[i][3] = atoi(token);
        
		//increment i so the next spot in the array is filled
		i++;
	
	}

// sorting method call
	sorting(sets, dynamic);


// calling my functions and doing some formatting
	int classA = countA(sets, dynamic);
	printf("Class A has %d networks\n", classA);
        highestA(sets, dynamic);
	printf("\n");

	int classB = countB(sets, dynamic);
	printf("Class B has %d networks\n", classB);
	highestB(sets, dynamic);
	printf("\n");


	int classC = countC(sets, dynamic); 
	printf("Class C has %d networks\n", classC);
	highestC(sets, dynamic);
	printf("\n");




	




	return 0;

}


