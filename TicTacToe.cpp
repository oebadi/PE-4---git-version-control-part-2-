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

int main(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    
}
