#include<bits/stdc++.h>
using namespace std;
int main(){
int a=5;

//pointer creation 
int*ptr=&a;

//access the value of pointer to
cout<<"value is "<<a<<endl;
cout<<"value is "<<*ptr<<endl;
cout<<"address is "<<ptr<<endl;
cout<<"address is"<<&a<<endl;
cout<<"address of pointer "<<&ptr<<endl;


    return 0;
}