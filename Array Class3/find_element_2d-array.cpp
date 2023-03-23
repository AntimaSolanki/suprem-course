#include<bits/stdc++.h>
using namespace std;
bool findKey(int arr[][3],int rows,int cols, int key){
    for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           if(arr[i][j]==key)
           return true;
       }
    }
    return false;
}
int main(){
int arr[3][3];
int key;
cout<<"enter key "<<endl;
cin>>key;

int rows=3;
int cols=3;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>arr[i][j];
    }
}
cout<<"print rows wise "<<endl;
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
    cout<<arr[i][j]<<" ";
   }
   cout<<endl;
}
//cout<<findKey(arr,3,3,key);
if(findKey(arr,3,3,key)){
    cout<<"key is present "<<endl;
}
else {
    cout<<"key is not present "<<endl;
}
    return 0;
}