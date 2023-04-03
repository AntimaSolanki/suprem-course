#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return true;
    }
}
return false;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[5]={1,2,3,4,5};
int n=5;
int key;
cin>>key;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
printArray(arr,n);
bool search=linearSearch(arr,n,key);
if(search){
    cout<<"true"<<endl;
}  
else{
    cout<<"false"<<endl;
}  
    return 0;
}