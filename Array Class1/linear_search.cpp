#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key)
    return true;
}
return false;
}
int main(){
int arr[]={1,2,3,4,5};
int n=5;
int key;
cin>>key;
if(linearSearch(arr,n,key)){
    cout<<"True"<<endl;
}
else {
    cout<<"false "<<endl;
}
    return 0;
}