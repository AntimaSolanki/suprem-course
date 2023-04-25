#include<bits/stdc++.h>
using namespace std;
int squr(int n){
    int target=n;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
    if(mid*mid==target){
        return mid;
    }
    else if(mid*mid<target){
        ans=mid;
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
//vector<int>arr{1,2,3,4,5,6,7,8,9,10};
int target;
cin>>target;
cout<<squr(target)<<endl;


    return 0;
}