#include<bits/stdc++.h>
using namespace std;
class A{
public:
int chem;
A(){
chem=100;
}
};
class B:public A{
public:
int chem;
B(){
chem=200;
}
};
class C:public A,public B{
public:
int maths;
};
int main(){
C obj;
//we use here scope resoltion so that it can be access it 
cout<<obj.A::chem<<" "<<obj.B::chem<<" "<<obj.maths<<endl;
    return 0;
}