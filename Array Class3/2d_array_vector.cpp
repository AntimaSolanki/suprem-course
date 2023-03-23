#include<bits/stdc++.h>
using namespace std;
int main(){
int row=3;
int cols=5;
vector<vector<int> >arr(3,vector<int>(5,0));
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}