#include<bits/stdc++.h>
using namespace std;
int findIndex(string& str,int& n,int& i,char& key){
    //base case 
    if(i>=n){
        return -1;
    }
    //ek caase chal doo 
    if(str[i]==key){
        return i;
    }
    findIndex(str,n,++i,key);
}
int main(){
string str="AntimaSOlanki";
int n=str.length();
int i=0;
char key;
cin>>key;
int ans=findIndex(str,n,i,key);
cout<<"index is "<<ans<<endl;
    return 0;
}