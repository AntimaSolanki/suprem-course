#include<bits/stdc++.h>
using namespace std;
void solve(int*& p){
    p=p+1;
}
int main(){
int a=5;
int* p=&a;
cout<<"before ->"<<p<<endl;
solve(p);
cout<<"after ->"<<p<<endl;

    return 0;
}