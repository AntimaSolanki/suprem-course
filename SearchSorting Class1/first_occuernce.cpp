#include<bits/stdc++.h>
using namespace std;
int first_Occ(int arr[], int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
int target;
cin>>target;
int n=10;
int arr[10]={1,2,2,2,2,4};
cout<<first_Occ(arr,n,target)<<endl;
    return 0;
}