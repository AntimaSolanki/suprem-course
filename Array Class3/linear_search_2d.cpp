#include<bits/stdc++.h>
using namespace std;
bool findkey(int arr[][3],int r,int c, int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key)
              return true;
        }
    }
    return false;
}
int main(){
int arr[3][3];
int r=3;
int c=3;
int key;
cin>>key;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
if(findkey(arr,r,c,key)){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

    return 0;
}