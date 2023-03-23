#include<bits/stdc++.h>
using namespace std;
int main(){
char name[100];
cin>>name;
for(int i=0;i<=7;i++){
    cout<<"index "<<i <<" value "<<name[i]<<endl;
}

int value=int(name[6]);
cout<<value<<endl;
    return 0;
}