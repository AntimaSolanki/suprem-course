#include<bits/stdc++.h>
using namespace std;
int last_Occ(int arr[],int n,int target){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==target){
        ans=mid;
        s=mid+1;
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
int arr[6]={1,2,3,3,3,3};
int n=5;
int target;
cin>>target;
cout<<last_Occ(arr,n,target)<<endl;

    return 0;
}