#include<bits/stdc++.h>
using namespace std;
int climb(int n){
    //base case
    if(n==0||n==1){
        return 1;
    }
    return climb(n-1)+climb(n-2);
}
int main(){
int n;
cin>>n;
int ans=climb(n);
cout<<ans<<endl;
    return 0;
}