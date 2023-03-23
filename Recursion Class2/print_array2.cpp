#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    //base case
    if(n==0){
        return ;
    }
    cout<<arr[0]<<" ";
    printArray(arr+1,n-1);
}
int main(){
int arr[]={10,20,30,40};
int n=4;
printArray(arr,n);
    return 0;
}