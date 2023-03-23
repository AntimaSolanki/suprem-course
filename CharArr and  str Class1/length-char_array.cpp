#include<bits/stdc++.h>
using namespace std;
int getLength(char ch[]){
int length =0;
int i=0;
while(ch[i]!='\0'){
     length++;
     i++;
}
return length;
}
int main(){
char name[100];
cin>>name;

cout<<"length is : "<<getLength(name );
    return 0;
}