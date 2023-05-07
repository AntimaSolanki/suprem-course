#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&arr,int s,int e,int target){
    //base case 
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
     return mid;
    }
    if(arr[mid]<target){
        s=mid+1;
        return binarySearch(arr,s,e,target);
    }
    else{
        e=mid-1;
        return binarySearch(arr,s,e,target);
    }
}
int main(){
vector<int>arr{10,20,30,40};
int n=arr.size();
int s=0;
int e=arr.size()-1;
int target;
cin>>target;
cout<<binarySearch(arr,s,e,target)<<endl;
    return 0;
}