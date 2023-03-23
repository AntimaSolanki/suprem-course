#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n,int i){
    //base case 
    if(i>=n){
        return ;
    }
    // recursion call kr doo
    printArray(arr,n,i+1);
    // ek case kr doo
    cout<<arr[i]<<" ";
}
int main(){
int arr[]={10,20,30};
int n=3;
int i=0;
printArray(arr,n,i);
    return 0;
}