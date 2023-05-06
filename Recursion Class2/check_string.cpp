#include<bits/stdc++.h>
using namespace std;
bool findKey(string name,int n,int i,char key){
    //base case 
    if(i>=n){
        return false;
    }
    //ek case solve kr doo
    if(name[i]==key){
       return true;
    }
    findKey(name,n,i+1,key);
}
int main(){
string name="AntimaSOlanki";
int n=name.length();
char key;
cin>>key;
int i=0;
bool ans=findKey(name,n,i,key);
cout<<"answer is "<<ans<<endl;
    return 0;
}