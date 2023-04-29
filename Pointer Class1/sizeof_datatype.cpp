#include<bits/stdc++.h>
using namespace std;
int main(){
int a=5;
int* p=&a;
cout<<"size of integer :"<<sizeof(a)<<endl;
cout<<"size of pointer p:"<<sizeof(p)<<endl;

char ch='b';
char* ptr=&ch;
cout<<"size of character :"<<sizeof(ch)<<endl;
cout<<"size of ptr pointer :"<<sizeof(ptr)<<endl;

double d=20;
double* ptrr=&d;
cout<<"size of double :"<<sizeof(d)<<endl;
cout<<"size of pointer double :"<<sizeof(ptrr)<<endl;




    return 0;
}