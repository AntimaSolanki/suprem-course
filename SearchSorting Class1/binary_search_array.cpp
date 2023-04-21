#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int size=9;
int target;
cin>>target;
if(binary_search(arr,arr+size,target)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found "<<endl;
}
    return 0;
}