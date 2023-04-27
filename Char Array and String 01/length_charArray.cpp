#include<bits/stdc++.h>
using namespace  std;
int getLength(char length[]){
    int i=0;
    while(length[i]!='\0'){
        i++;
    }
    return i-1;
}
int main(){
char name[100];
cin>>name;
cout<<getLength(name)<<endl;
return 0;
}