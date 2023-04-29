#include<bits/stdc++.h>
using namespace std;
int main(){
int a=5;
int* ptr=&a;
cout<<a<<endl; //value of a 
cout<<&a<<endl; //address of a 
cout<<*ptr<<endl;//value of a
cout<<ptr<<endl;//address of a 
cout<<&ptr<<endl;//address of ptr
    return 0;
}