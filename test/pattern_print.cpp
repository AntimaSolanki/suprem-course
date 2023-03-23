#include<bits/stdc++.h>
using namespace std;
vector<char> printpattern(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<" ";
    }
}
int main(){
int n;
cin>>n;
printpattern(n);
    return 0;
}