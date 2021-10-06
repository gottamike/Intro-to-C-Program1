// function that counts how many C networks there are
int countC(int set[][4], int size){
        int dynamic = size;
	// start with 0 networks
        int classC = 0;
        for (int i = 0; i < dynamic; i++){
		// checks if the number counts towards C networks
                if(set[i][0] >= 192) {
			// increment networks
                        classC += 1;
                }
        }
        return classC;
}
