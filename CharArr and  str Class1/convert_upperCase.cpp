#include<bits/stdc++.h>
using namespace std;
void LowerCase(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        ch[i]=ch[i]-'A'+'a';
    }
}
int main(){
char word[100];
cin>>word;
LowerCase(word);
cout<<word<<endl;
    return 0;
}