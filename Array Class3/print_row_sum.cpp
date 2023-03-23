#include<bits/stdc++.h>
using namespace std;
void rowsum(int arr[][3], int rows ,int cols){
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
         sum=sum+arr[i][j];
        }
       // cout<<sum<<endl;
    }
    cout<<sum<<endl;
}
int main(){
int arr[3][3];
int rows=3;
int cols=3;
for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
    cin>>arr[i][j];
  }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
rowsum(arr,rows,cols);
    return 0;
}