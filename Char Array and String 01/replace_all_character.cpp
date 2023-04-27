#include<bits/stdc++.h>
using namespace std;
void replaceSpace(char sentences[100]){
    for(int i=0;i<strlen(sentences)-1;i++){
        if(sentences[i]==' '){
            sentences[i]='@';
        }
    }
}
int main(){
char sentences[100];
cin.getline(sentences,100);
cout<<"before "<<sentences<<endl;
replaceSpace(sentences);
cout<<"after "<<sentences<<endl;

    return 0;
}