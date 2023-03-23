#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n,int i){
    // base case
    if(i>=n){
        return ;
    }
    //ek case slove kr doo
    cout<<arr[i]<<" ";
    // bakki recursion solve kr dega 
    printArray(arr,n,i+1);
}
int main(){
int arr[]={10,20,30,40};
int n=4;
int i=0;
printArray(arr,n,i);
    return 0;
}