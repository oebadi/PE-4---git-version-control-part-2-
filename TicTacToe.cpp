#include <iostream>
#include <cstdio>

struct Position {
	int row;
	int col;
	bool operator==(const Position &other) { return row == other.row && col == other.col;}
};

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
	int mat[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
	bool gameOver = false;
	int player = 1;
	Position pos;

    while(!win){
        pos = GetPlayerChoice();
        PlaceMarker(pos, player, arr);
        win = Winner(arr);
        if(!win){
            if(player == 1){
                player = 2;
            }
            else{
                player = 1;
            }
        }
        DisplayBoard(arr);
    }
    std::cout << "Game over. Player: " << player << " won the game" << std::endl;
	
    return 0;
}
