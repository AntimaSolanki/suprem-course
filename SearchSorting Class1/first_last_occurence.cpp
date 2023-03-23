#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>v,int target){
    int s=0,e=v.size()-1;
    int mid=s+(e-s)/2;
     int ans=-1;
    while(s<=e){
    if(v[mid]==target){
    // anser mai store and left chal le 
        ans=mid;
        e=mid-1;
    }
    else if(v[mid]<target){
      // right mai chalo
      s=mid+1;
    }
    else if(v[mid]>target){
        // left mai chalo 
        e=mid-1;
    }
     mid=s+(e-s)/2;  
    }
    return ans;
}
int lastOcc(vector<int>v,int target){
    int s=0,e=v.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(v[mid]==target){
            // ans mai store kro ans right jauo
            ans=mid;
            s=mid+1;
        }
        else if(v[mid]<target){
            // right jauoo
          s=mid+1;
        }
        else if(v[mid]>target){
            //left jauoo
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
vector<int>v{1,3,4,4,4,4,4,6,7,9};
int target=4;

cout<<firstOcc(v,target)<<endl;
cout<<lastOcc(v,target)<<endl;

    return 0;
}