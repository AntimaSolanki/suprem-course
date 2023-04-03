#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{1,2,3,4,5};
vector<int>brr{1,2,3,5,6,7};
vector<int>ans;
for(int i=0;i<arr.size();i++){
  int element=arr[i];
  for(int j=0;j<brr.size();j++){
    if(element==brr[j]){
      brr[j]==INT_MIN;
      ans.push_back(element);
  }
}
}
for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<" ";
}
  return 0;
}