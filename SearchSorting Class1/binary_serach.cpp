#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int target){
int s=0, e=size-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(target==arr[mid]){
         return mid;
    }
    else if (target>arr[mid]){
        s=mid+1;
    }
    else {
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return -1;
}
int main(){
int arr[]={2,3,4,5,6,7};
int size=6;
int target=3;

int indexOfTarget=binarySearch(arr,size,target);
cout<<indexOfTarget<<endl;

if(indexOfTarget==-1){
    cout<<"target not found "<<endl;
}
else {
    cout<<"targetis found "<<endl;
}


    return 0;
}