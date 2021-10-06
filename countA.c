
// function that counts how many A networks there are 
int countA(int set[][4], int size){
        int dynamic = size;
	// starting with 0 networks
        int classA = 0;
        for (int i = 0; i < dynamic; i++){
		// if a network is of a certain integer value
                if (set[i][0] <= 127){
			// increment by 1
                        classA += 1;
                }
        }

        return classA;
}
