#include<bits/stdc++.h>
using namespace std;
int main(){
char ch[10];
cin>>ch;
// using getline function for print all the string with 
//spaces , tabs and enter
cin.getline(ch,12);
cout<<"printing ch"<<ch<<endl;

char name[100];
cin>>name;
cout<<name<<endl;
cout<<"3rd element "<<name[3]<<endl;
cout<<"50th element "<<name[50]<<endl;
cin.getline(name,50);
cout<<name;

    return 0;
} 