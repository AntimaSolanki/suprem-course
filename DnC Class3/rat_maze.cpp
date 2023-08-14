#include<bits/stdc++.h>
using namespace std;
bool isSafe(int i, int j, int arr[][3],int row, int col, vector<vector<bool>>&visited){
    if(((i>=0)&&(i<row))&&((j>=col)&&(j<col))&&((arr[i][j]=1)&&(visited[i][j]=false))){
        return true;
    }
    else{
        return false;
    }
}
void solveMaze(int arr[][3], int row, int col, int i , int j, vector<string>&path, string output,vector<vector<bool>>&visited){
    //base case 
    if(i==row-1&&j==col-1){
        path.push_back(output);
        return ;
    }
    //down ->i+1,j
    if(isSafe(i+1,j,arr,row, col,visited)){
     visited[i+1][j]=true;
     solveMaze(arr,row,col,i+1,j,path,output+'D',visited);
     //backtracking
     visited[i+1][j]=false;
    }
    //left ->i,j-1
    if(isSafe(i,j-1,arr,row,col,visited)){
        visited[i][j-1]=true;
        solveMaze(arr,row,col,i,j-1,path,output+'L',visited);
        //backtracking 
        visited[i][j-1]=false;
    }
    //right ->i,j+1
    if(isSafe(i,j+1,arr,row,col,visited)){
       visited[i][j+1]=true;
       solveMaze(arr,row,col,i,j+1,path,output+'R',visited);
       //backtracking 
       visited[i][j+1]=false;
    }
    //up ->i-1,j
    if(isSafe(i-1,j,arr,row,col,visited)){
        visited[i-1][j]=true;
        solveMaze(arr,row,col,i-1,j,path,output+'U',visited);
        //backtracking 
        visited[i-1][j]=false;
    }
}
int main(){
int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
int row=3;
int col=3;
if(maze[0][0]==0){
    cout<<"no path exit "<<endl;
}
vector<vector<bool>>visited(row, vector<bool>(col,false));
visited[0][0]=true;

vector<string>path;
string output="";
solveMaze(maze,row,col,0,0,path, output,visited);
for(auto i:path){
    cout<<i<<" ";
}
cout<<endl;
if(path.size()==0){
    cout<<"no path exit "<<endl;
}

    return 0;
}