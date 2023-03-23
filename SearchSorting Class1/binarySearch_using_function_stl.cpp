#include<bits/stdc++.h>
using namespace std;
int main(){
    // VECTOR USING BS STL FUNCTION 
vector<int>v{1,2,3,4};
//cout<<(binary_search(v.begin(),v.end(),3));
if(binary_search(v.begin(),v.end(),3)){
    cout<<"found"<<endl;
}
else {
    cout<<"Not Found"<<endl;
}
   // ARRAY USING BS FUNCTION STL
int arr[]={1,2,3};
int n=3;
if(binary_search(arr,arr+n,3)){
    cout<<"found"<<endl;
}
else {
    cout<<"not found "<<endl;
}

    return 0;
}