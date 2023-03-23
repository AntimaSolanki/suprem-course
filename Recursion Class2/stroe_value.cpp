#include<bits/stdc++.h>
using namespace std;
void find(string str,int n,int i,char key,vector<int>&ans){
//base case 
if(i>=n){
    return;
}
if(str[i]==key){
    ans.push_back(i);
}
   find(str,n,i+1,key,ans);
}
int main(){
string str="lovebabbar";
int n=str.length();
int i=0;
char key='r';
vector<int>ans;
for(auto val:ans){
    cout<<val;
}
    return 0;
}