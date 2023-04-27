#include<bits/stdc++.h>
using namespace std;
void reverseArray(char name[]){
    int i=0;
    int j=strlen(name)-1;
    while(i<=j){
        swap(name[i],name[j]);
            i++;
            j--;
        
    }
}
int main(){
char name[100];
cin>>name;
cout<<"initally name is :"<<name<<endl;
reverseArray(name);
cout<<"finally name is :"<<name<<endl;

    return 0;
}