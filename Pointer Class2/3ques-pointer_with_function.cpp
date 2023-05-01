#include<bits/stdc++.h>
using namespace std;
void update(int* a,int* b){
*a=100;
*b=200;
}
int main(){
int arr[4]={12,23,34,45};
int* p=&arr[1];
int* q=&arr[2];
update(p,q);
cout<<p<<endl;
cout<<q<<endl;

    return 0;
}