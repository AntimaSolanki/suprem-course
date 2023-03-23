#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][3],int rows,int cols, int transposeArr[][3]){
    for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
        transposeArr[j][i]=arr[i][j];
       }
    }
}
void printArray(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
int arr[3][3];
int rows=3,cols=3;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>arr[i][j];
    }
}
cout<<"print rows array"<<endl;
printArray(arr,3,3);
int transposearr[3][3];
cout<<"transpose the array "<<endl;
transpose(arr,3,3,transposearr);
cout<<"print the transpose array "<<endl;
printArray(transposearr,3,3);

    return 0;
}