#include<bits/stdc++.h>
using namespace std;
void max(int arr[],int n,int i,int& maxi){
    //base case 
    if(i>=n){
        return ;
    }
    //ek case solve kr doo
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    //baaki recursion kr lega
    max(arr,n,i+1,maxi);
}
int main(){
int arr[]={10,20,30};
int n=3;
int maxi=INT_MIN; 
int i=0;
max(arr,n,i,maxi);
cout<<maxi<<endl;
    return 0;
}