#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int i){
    //base case
    if(i>=n) return ;
    //basically we done 1 case 
    cout<<arr[i]<<" ";
    //another case will be handled by recursion 
    print(arr,n,i+1);
}
int main(){
int arr[5]={12,20,30,40,50};
int n=5;
int i=0;
print(arr,n,i);

    return 0;
}