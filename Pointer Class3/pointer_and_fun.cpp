#include<bits/stdc++.h>
using namespace std;
//This pointr is pass by value
void utill(int* p){
    p=p+1;
}
int main(){
int a=5;
int* p=&a;
cout<<"before"<<endl;
cout<<a<<endl;
cout<<p<<endl;
cout<<*p<<endl;
utill(p);
cout<<"after"<<endl;
cout<<a<<endl;
cout<<p<<endl;
cout<<*p<<endl;
    return 0;
}