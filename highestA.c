// function that finds the most Hosts per network for A networks
void highestA(int set[][4], int size){
        int dynamic = size;
        int largestInt = 0;
	// start with 0 as our largest host
        int numberofLargest = 0;
        for (int i = 0; i < dynamic; i++){
		// because its sorted this should yield the largest network
                if (set[i][0] <= 127){
			// continue to update largestInt until we run out of networks
                        largestInt = set[i][0];
                }
        }
	// check how many networks are on that host
        for (int i = 0; i < dynamic; i++){
		// if the row has the largest host number
                if (set[i][0] == largestInt){
			// increment how many networks are on that host
                        numberofLargest += 1;
                }
        }
	// formatting 
        printf("Largest A network is %d with %d hosts", largestInt, numberofLargest);


}
