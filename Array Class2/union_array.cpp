#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3};
int a=3;
int brr[]={4,5,6};
int b=3;
vector<int>ans;
for(int i=0;i<a;i++){
ans.push_back(arr[i]);
}
for(int i=0;i<b;i++){
    ans.push_back(brr[i]);
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
    return 0;
}