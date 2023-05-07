#include<bits/stdc++.h>
using namespace std;
bool checkSort(vector<int>& arr,int& n,int& i){
    //base case 
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
    return checkSort(arr,n,++i);
}

int main(){
vector<int>arr{10,20,30,40};
int n=arr.size();
int i=0;
if(checkSort(arr,n,i)){
    cout<<"Array is sorted "<<endl;
}
else{
    cout<<"array is not sorted "<<endl;
}

    return 0;
}