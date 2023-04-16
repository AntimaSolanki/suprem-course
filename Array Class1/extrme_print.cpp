#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int n;
cin>>n;
int s=0;
int e=n-1;
while(s<=e){
    if(s==e){
        cout<<arr[s]<<endl;
    }
    else{
        cout<<arr[s]<<" ";
        cout<<arr[e]<<" ";
    }
    s++;
    e--;
}
    return 0;
}