#include<bits/stdc++.h>
using namespace std;
void printSolution(vector<vector<int>>&board,int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<board[i][j]<<" ";
    }
    cout<<endl; 
   } 
   
}
bool isSafe(int row, int col, vector<vector<int>>&board, int n){
    //current cell pr queen rhak sakte hai kya nhi 
    int i=row;
    int j=col;
    //check row
    while(j>=0){
        if(board[i][j]=1){
            return false;
        }
        j--;
    }
    // check upper digonal
    i=row;
    j=col;
    while(i>=0&&j>=0){
        if(board[i][j]==1){
            return false;    
        }
        i--;
        j--;
    }
    //check bottom digonal 
    i=row;
    j=col;
    while(i<n&&j>=0){
        if(board[i][j]==1){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solveMaze(vector<vector<int>>&board, int col, int n){
    //base case 
    if(col>=n){
        printSolution(board,n);
        return ;
    }
    //ek case solve kr loo, bakki recursion dek lege
    for(int row=0;row<n;row++){
     if(isSafe(row,col,board,n)){
        //rhak doo
        board[row][col]=1;
        //recursion
        solveMaze(board,col+1,n);
        //backtracking
        board[row][col]=0;
     }
    }
}
int main(){
int n=4;
int col=0;
vector<vector<int>>board(n,vector<int>(n,0));
//0 means empty cell
//1 means queen at that cell
solveMaze(board,col,n);
    return 0;
}
