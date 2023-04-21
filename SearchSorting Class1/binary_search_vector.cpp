#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{1,2,3,4,5};
int target;
cin>>target;
if(binary_search(arr.begin(),arr.end(),target)){
    cout<<"found"<<endl;
}

else{
    cout<<"not found "<<endl;
}
    return 0;
}