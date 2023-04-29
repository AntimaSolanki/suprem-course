#include<bits/stdc++.h>
using namespace std;
int main(){
//Bad practices
int* ptr;
cout<<ptr<<endl;
//cout<<*ptr<<endl;

//Good practices
int* ptr=0;
cout<<*ptr<<endl;

//Very Best practices-->>NULL POINTER 
int* ptr=nullptr;
cout<<*ptr<<endl;
    return 0;
}