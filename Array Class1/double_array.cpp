#include<bits/stdc++.h>
using namespace std;
void doubleArray(int arr[], int n){
for(int i=0;i<n;i++){
    cout<<2*arr[i]<<" ";
}
cout<<endl;
}
int main(){
int arr[10];
int n=5;
for(int  i=0;i<n;i++ ){
    cin>>arr[i];
}
doubleArray(arr,n);

    return 0;
}