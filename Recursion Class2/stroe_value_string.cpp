#include<bits/stdc++.h>
using namespace std;
void StoreString(string& str,int& n,int& i,char& key,vector<int>&ans){
    //base case 
    if(i>=n){
        return ;
    }
    //ek case solve kr doo
    if(str[i]==key){
        ans.push_back(i);
    }
    return StoreString(str,n,++i,key,ans);
}
int main(){
string str="AntimaSolanki";
int n=str.length();
char key;
cin>>key;
int i=0;
vector<int>ans;
StoreString(str,n,i,key,ans);
for(auto val: ans){
    cout<<val<<endl;
}
    return 0;
}