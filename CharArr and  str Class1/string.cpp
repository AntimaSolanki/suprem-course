#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
getline(cin,str);
cout<<str;   

cout<<"length "<<str.length()<<endl;
cout<<"empty "<<str.empty()<<endl;
str.push_back('A');
str.pop_back();
cout<<str<<endl;
cout<<str.substr(1,3)<<endl;
    return 0;
}   