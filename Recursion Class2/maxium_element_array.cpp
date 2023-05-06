#include<bits/stdc++.h>
using namespace std;
void findMax(int arr[],int i,int n,int& maxi){
    //base case 
    if(i>=n){
        return ;
    }
    if(maxi<arr[i]){
        maxi=arr[i];
    }
    findMax(arr,i+1,n,maxi);
}
int main(){
int arr[5]={10,20,30,40,50};
int n=5;
int i=0;
int maxi=INT_MIN;
findMax(arr,i,n,maxi);
cout<<"maxium value is "<<maxi<<endl;
    return 0;
}