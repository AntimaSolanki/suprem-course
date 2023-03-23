#include<bits/stdc++.h>
using namespace std;
void  reverseArray(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void  printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
int arr[8]={1,2,3,4,5,6,7,8};
reverseArray(arr,8);
printarray(arr,8);

    return 0;
}