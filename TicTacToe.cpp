void *CreateBoard(){
    int mat[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    return *mat;
}

void DisplayBoard(int A[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
            std::cout << " " << B[i][j] <<" ";
		}
		std::endl;
	}
}

void PlaceMarker(Position p, int mark, int mat[3][3]) {

	mat[p.row][p.col] = mark;

}

Position GetPlayerChoice(){
	Position end;
	int row, col;
	std::cout << "Please enter row: " << std::endl;
	std::cin >> row;
	std::cout << "Please enter column: " << std::endl;
	std::cin >> col;

	end.row = pos_row;
	end.col = pos_col;


	return end;
}


int main(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    
}
