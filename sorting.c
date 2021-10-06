// sorting function that takes inspiration from Bubble Sort
void sorting(int set[10][4], int rows){
	// start from the last column
        for (int i = 3; i >= 0; i--){
                for (int l = 0; l < rows-1; l++){
                        if (set[l][i] > set[l+1][i]){
				// swap if row 0 and row 1 are conflicting
                                swap(set, l, l+1);
				// this allows me to check all rows and columns
                                l = -1;
                        }
                }
        }
}
