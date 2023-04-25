#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char name[100];
cin>>name;
for(int i=0;i<n;i++){
    cout<<"index is "<<i<<" value is :"<<name[i]<<endl;
}
int value=(int)name[7];
cout<<value<<endl;
    return 0;
}