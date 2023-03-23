#include<bits/stdc++.h>
using namespace std;
void reverseArray(char ch[]){
    int s=0;
    int e=strlen(ch)-1;
    while(s<=e){
   swap(ch[s],ch[e]);
   s++;
   e--;
    }
}
int main(){
char name[100];
cin>>name;
cout<<"after "<<name<<endl;
reverseArray(name );
cout<<"before "<<name<<endl;

}