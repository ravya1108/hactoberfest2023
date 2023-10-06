#include<bits/stdc++.h>
#define V 9
using namespace std;


bool isvalid(vector<vector<int>> board,int x,int y,int val){
	for(int i=0;i<board.size();i++){
		if(board[x][i]==val){
			return false;
		}
	}
	for(int i=0;i<board.size();i++){
		if(board[i][y]==val){
			return false;
		}
	}

	int smi=(x/3)*3;
	int smj=(y/3)*3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(board[i+smi][j+smj]==val){
				return false;
			}
		}
	}
	return true;
}
void printgraph(vector<vector<int>> board){
	for(int i=0;i<board.size();i++){
		for(int j=0;j<board[i].size();j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
void sudoku(vector<vector<int>> board,int i,int j){
	int ni,nj;
	if(i==board.size()){
		printgraph(board);
		return ;
	}

	if(j==board.size()-1){
		ni=i+1;
		nj=0;
	}
	else{
		ni=i;
		nj=j+1;
	}

	if(board[i][j]!=0){
		sudoku(board,ni,nj);
	}
	else{
		for(int po=1;po<=9;po++){
			if(isvalid(board,i,j,po)==true){
				board[i][j]=po;
				sudoku(board,ni,nj);
				board[i][j]=0;
			}
		}
	}
}
int main(){
	 vector<vector<int>>graph= { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } ,};
	sudoku(graph,0,0);
}
