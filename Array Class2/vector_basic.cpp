#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr;
int ans=(sizeof(arr)/sizeof(int));
cout<<ans<<endl;
cout<<arr.size()<<endl; //0
cout<<arr.capacity()<<endl; //0

// insert element 
arr.push_back(5);
arr.push_back(2);
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}cout<<endl;

arr.pop_back();
for(int i=0;i<=arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

vector<int>brr(10,2);
cout<<brr.size()<<endl;
cout<<brr.capacity()<<endl;
for(int i=0;i<brr.size();i++){
    cout<<arr[i]<<" ";
}cout<<endl;

vector<int>crr;
cout<<crr.empty()<<endl;

    return 0;
}