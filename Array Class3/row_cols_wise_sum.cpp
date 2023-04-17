#include<bits/stdc++.h>
using namespace std;
void printRowSum(int arr[][3],int rows,int cols){
    int sum=0;
    cout<<"row wise sum"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
   // cout<<sum<<endl;

}
void printColSum(int arr[][3],int rows,int cols){
    int sum=0;
    cout<<"cols wise sum"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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
printRowSum(arr,rows,cols);
printColSum(arr,rows,cols);
    return 0;
}