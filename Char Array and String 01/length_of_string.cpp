#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main(){
char ch[100];
cin>>ch;
cout<<ch<<endl;

cout<<getLength(ch)<<endl;
    return 0;
}