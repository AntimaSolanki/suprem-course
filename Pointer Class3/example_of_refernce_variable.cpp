#include<bits/stdc++.h>
using namespace std;
void solve(int* val){
    *val=*val+1;
}
int main(){
int a=5;
int* ptr=&a;
solve(&a);
cout<<a<<endl;
    return 0;
}