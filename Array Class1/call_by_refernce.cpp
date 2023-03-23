//Call by referrnce 
#include<bits/stdc++.h>
using namespace std;
int printArray(int arr[], int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void inc(int arr[], int n){
arr[0]=arr[0]+10;
printArray(arr,n);
}
int main(){
int arr[]={1,2};
int n=2;
inc(arr,n);
printArray(arr,n);
    return 0;
}