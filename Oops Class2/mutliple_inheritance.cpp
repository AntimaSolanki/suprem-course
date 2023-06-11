#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int phys;
};
class B:public A{
    public:
    int chem;

};
class C:public A,public B{
    public:
    int maths;

};
int main(){
    C obj;
    //cout<<obj.phys<<" "<<obj.chem<<" "<<obj.maths<<endl;


    return 0;
}