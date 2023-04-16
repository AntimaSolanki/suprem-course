#include<bits/stdc++.h>
using namespace std;
int findUnique(vector<int>v){
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=ans^v[i];
    }
    return ans;

}
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}
cout<<findUnique(arr)<<endl;

    return 0;
}