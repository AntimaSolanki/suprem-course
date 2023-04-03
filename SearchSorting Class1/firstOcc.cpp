#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>arr,int target){
    int s=0,e=arr.size()-1;
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
        else if(arr[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(vector<int>arr,int target){
    int s=0,e=arr.size()-1;
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
        else if(arr[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
vector<int>v{1,2,3,4,4,4,4,4,6,7,8};
int target;
cin>>target;

int firstIndex=firstOcc(v,target);
cout<<"phele wala "<<firstIndex<<endl;

int lastIndex=lastOcc(v,target);
cout<<"akir wala "<<lastIndex<<endl;

    return 0;
}