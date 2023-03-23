#include<bits/stdc++.h>
using namespace std;
void  reverse(char ch[]){
    int s=0,e=strlen(ch)-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
int main(){
char name[100];
cin>>name;
//bool rev= reverse(name);

    return 0;
}