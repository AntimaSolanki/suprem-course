#include<bits/stdc++.h>
using namespace std;
int UpperToLower(char name[]){
    for(int i=0;i<strlen(name);i++){
        name[i]=name[i]-'a'+'A';
    }
}
int main(){
char name[100];
cin>>name;
UpperToLower(name);
cout<<name;
    return 0;
}