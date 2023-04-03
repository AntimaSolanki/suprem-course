#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
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
int arr[]={1,2,3,4,5};
int n=5;
int target;
cin>>target;
if(binarySearch(arr,n,target)){
cout<<"element found "<<endl;
}
else{
    cout<<"element not found "<<endl;
}

    return 0;
}