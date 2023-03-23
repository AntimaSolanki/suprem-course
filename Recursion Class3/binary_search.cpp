#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>arr,int s,int e,int key){
    //base case
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
vector<int>v{10,20,30,40};
int s=0;
int e=v.size()-1;
int key;
cin>>key;
cout<<binarySearch(v,s,e,key);
    return 0;
}