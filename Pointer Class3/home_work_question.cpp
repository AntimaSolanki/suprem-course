#include<bits/stdc++.h>
using namespace std;
int* solve(){
    int a=5;
    int* ans=&a;
    return ans;
}
int main(){
int a=5;
cout<<a<<endl;
solve();
cout<<a<<endl;

    return 0;
}