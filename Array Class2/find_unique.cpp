#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{1,6,3};
vector<int>brr{4,5,6};
vector<int>ans;
for(int i=0;i<arr.size();i++){
    ans.push_back(arr[i]);
}
for(int i=0;i<brr.size();i++){
    ans.push_back(brr[i]);
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

    return 0;
}