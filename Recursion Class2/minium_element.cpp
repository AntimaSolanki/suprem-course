#include<bits/stdc++.h>
using namespace std;
void min(int arr[],int n,int i,int& mini){
    //base case
    if(i>=n){
        return ;
    }
    //ek case chek kr loo 
    if(arr[i]<mini){
        mini=arr[i];
    }
    //bakki recursion kr lega 
    min(arr,n,i+1,mini);
}
int main(){
int arr[]={10,20,30};
int n=3;
int i=0;
int mini=INT_MAX;
min(arr,n,i,mini);
cout<<mini<<endl;
    return 0;
}