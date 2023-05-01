#include<bits/stdc++.h>
using namespace std;
void solve(int* p){
    *p=*p+10;
}
int main(){
int a=5;
int* p=&a;
cout<<a<<endl;
solve(p);
cout<<a<<endl;
    return 0;
}