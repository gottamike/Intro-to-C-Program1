// function that finds the most Hosts per network for B networks
void highestB(int set[][4], int size){
        int dynamic = size;
        int largestInt = 0;
	// start with 0 as our largest
        int numberofLargest = 0;
        int indexofLargest = 0;
        for (int i = 0; i < dynamic; i++){
		// becaus its sorted this should yield the largest host
                if((set[i][0] >= 128) && (set[i][0] <= 191)) {
			// continue to update largestInt until we run out of networks
                        largestInt = set[i][0];
                        indexofLargest = i;
                }
        }
	// check how many networks are on that host
        for (int i = 0; i < dynamic; i++){
		// if the row has the largest host number
                if (set[i][0] == largestInt){
			// incrememnt how many networks are on that host
                        numberofLargest += 1;
                }
        }
	// formatting
        int attachment = set[indexofLargest][1];
        printf("Largest B network is %d.%d with %d hosts", largestInt, attachment, numberofLargest);


}
