#include<bits/stdc++.h>
using namespace std;
bool findKey(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
              return true;
            }
        }
    }
    return false;
}
int main(){
int arr[3][3];
int rows=3;
int cols=3;
int key;
cin>>key;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>arr[i][j];
    }
}
if(findKey(arr,rows,cols,key)){
    cout<<"found"<<endl;
}else{
    cout<<"not found"<<endl;
}

    return 0;
}