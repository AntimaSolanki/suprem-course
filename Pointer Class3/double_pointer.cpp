#include<bits/stdc++.h>
using namespace std;
void solve(int** ptr){
    //*ptr=*ptr+1;
    **ptr=**ptr+1;
}
int main(){
int a=5;
int* p=&a;
int** q=&p;
solve(q);
cout<<a<<endl;


    return 0;
}