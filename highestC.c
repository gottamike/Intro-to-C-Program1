// function that finds the most Hosts per network for C networks
void highestC(int set[][4], int size){
        int dynamic = size;
        int largestInt = 0;
	// start with 0 as our largest host
        int numberofLargest = 0;
        int indexofLargest = 0;
        for (int i = 0; i < dynamic; i++){
		// because its sorted this should yield the largest network
                if(set[i][0] >= 192 && (set[i][0] >= largestInt))  {
			// continue to update largestInt until we run out of networks
                        largestInt = set[i][0];
                        indexofLargest = i;
                }
        }
	// check how many networks are on that host
        for (int i = 0; i < dynamic; i++){
		// if the row has the largest host number
                if (set[i][0] == largestInt){
			// increment the networks
                        numberofLargest += 1;
                }
        }

	
	// formatting
        int attachment = set[indexofLargest][1];
        int secondAttachment = set[indexofLargest][2];
        printf("Largest C network is %d.%d.%d with %d hosts", largestInt, attachment, secondAttachment, numberofLargest);

}

