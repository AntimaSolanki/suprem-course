#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>v,int target){
    int s=0;
    int e=v.size()-1;
    int mid=s-(e-s)/2;
    while(s<=e){
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]>target){
        e-mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
vector<int>arr{1,2,3,4,5};
int target;
cin>>target;

if(binarySearch(arr,target)){
    cout<<"found element"<<endl;
}
else{
    cout<<"Not found element"<<endl;
}


return 0;
}