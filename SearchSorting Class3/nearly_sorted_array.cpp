#include<bits/stdc++.h>
using namespace std;
int nearlySorted(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1>=0&&arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1<arr.size()&&arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
vector<int>arr{10,3,40,50,80,70};
int target;
cin>>target;
cout<<nearlySorted(arr,target)<<endl;
    return 0;
}