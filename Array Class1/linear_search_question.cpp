#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int size,int key){
for(int i=0;i<size;i++){
    if(arr[i]==key){
        return true;
    }
}
return false;
}
int main(){

int n;
cin>>n;
int arr[5];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
if(linearSearch(arr,n,key)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found "<<endl;
}


    return 0;
}