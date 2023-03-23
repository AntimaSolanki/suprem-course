#include<bits/stdc++.h>
using namespace std;
void replace(char sent[]){
for(int i=0;i<=strlen(sent)-1;i++){
    if(sent[i]==' ')
     sent[i]='@';
   }
}
int main(){
char sentence[100];
cin.getline(sentence,100);
replace(sentence);
cout<<sentence<<endl;

    return 0;
} 