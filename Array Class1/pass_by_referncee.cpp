#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inc(int arr[],int n){
    arr[0]=arr[0]+10;

    printArray(arr,n);
}

int main(){
int arr[]={1,2,3};
int n=3;
inc(arr,3);
printArray(arr,3);
    return 0;
    
}