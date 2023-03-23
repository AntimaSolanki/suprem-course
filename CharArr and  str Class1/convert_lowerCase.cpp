#include<bits/stdc++.h>
using namespace std;
void upperCase(char ch[]){
  for(int i=0;i<strlen(ch);i++){
    ch[i]=ch[i]-'a'+'A';
  }
}
int main(){
char word[100];
cin>>word;
upperCase(word);
cout<<word<<endl;
    return 0;
}