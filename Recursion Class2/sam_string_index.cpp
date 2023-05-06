#include<bits/stdc++.h>
using namespace std;
void findSameIndex(string& str,int& n,int& i,char& key){
//base case
if(i>=n){
    return ;
}
//ek case solve kr doo
if(str[i]==key){
    cout<<i<<endl;

}
 return findSameIndex(str,n,++i,key);
}
int main(){
string str;
cin>>str;
int n=str.length();
int i=0;
char key;
cin>>key;
findSameIndex(str,n,i,key);
    return 0;
}