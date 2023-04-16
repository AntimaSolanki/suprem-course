#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int>ans;
vector<int>arr(n);
for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}
vector<int>brr(m);
for(int i=0;i<brr.size();i++){
   cin>>brr[i];
}
for(int i=0;i<arr.size();i++){
    arr.push_back(arr[i]);
}
for(int i=0;i<brr.size();i++){
    brr.push_back(brr[i]);
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

    return 0;
}