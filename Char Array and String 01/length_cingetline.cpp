#include<bits/stdc++.h>
using namespace std;
int getlength(char name[]){
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
cin.getline(ch,50);
cout<<ch<<endl;

cout<<getlength(ch)<<endl;
    return 0;
}