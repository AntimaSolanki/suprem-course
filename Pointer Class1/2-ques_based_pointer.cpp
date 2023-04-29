#include<bits/stdc++.h>
using namespace std;
int main(){
int a=10;
int* ptr=&a;
cout<<a<<endl;
cout<<&a<<endl;
cout<<*ptr<<endl;
cout<<ptr<<endl;
cout<<&ptr<<endl;
cout<<a+1<<endl;
cout<<*ptr+1<<endl;
cout<<ptr+1<<endl;
cout<<(ptr)++<<endl;
cout<<++(ptr)<<endl;
cout<<*ptr *2<<endl;
cout<<*ptr/2<<endl;

    return 0;
}