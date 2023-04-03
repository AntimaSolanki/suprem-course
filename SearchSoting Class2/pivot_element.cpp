#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid+1<=v.size()-1&&v[mid]>v[mid+1]){
            return mid;
        }
        if(mid-1>=0&&v[mid]<v[mid+1]){
            return mid+1;
        }
        if(v[s]<v[mid]){//right mai jao
        s=mid=1;
        }
        else if(v[s]>=v[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{3,4,5,6,7,1,2};
    int ans=findPivot(arr);
    cout<<arr[ans]<<endl;
}