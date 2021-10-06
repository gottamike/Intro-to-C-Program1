// function that counts how many B networks there are
int countB(int set[][4], int size){
        int dynamic = size;
	// start with 0 b networks
        int classB = 0;
        for (int i = 0; i < dynamic; i++){
		// if the network is a certain number
                if((set[i][0] >= 128) && (set[i][0] <= 191)) {
			// increment B
                        classB += 1;
                }
        }
        return classB;
}
