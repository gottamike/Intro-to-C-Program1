// swap function following the professors logic given to us in class
// takes in an array as well as the current row and the next row
void swap(int set[10][4], int row, int nRow) {
        int temp[4];

	// everything needs to be swapped
	// a for loop would have worked nicely here too
        temp[0] = set[row][0];
        temp[1] = set[row][1];
        temp[2] = set[row][2];
        temp[3] = set[row][3];
        set[row][0] = set[nRow][0];
        set[row][1] = set[nRow][1];
        set[row][2] = set[nRow][2];
        set[row][3] = set[nRow][3];
        set[nRow][0] = temp[0];
        set[nRow][1] = temp[1];
        set[nRow][2] = temp[2];
        set[nRow][3] = temp[3];
}
