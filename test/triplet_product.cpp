#include<bits/stdc++.h>
using namespace std;
long long maxtriproduct(int arr[],int n){
    int maxi=INT_MIN;
    int product=1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return product*maxi;
}
int main(){
int n=4;
int arr[4]={1,2,3,5};


cout<<maxtriproduct(arr,n);

    return 0;
} 