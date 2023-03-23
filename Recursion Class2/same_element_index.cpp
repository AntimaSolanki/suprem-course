#include<bits/stdc++.h>
using namespace std;
void indexAccess(string str,int n,int i,char key){
    //base case 
    if(i>=n){
        return ;
    }
    // ek case check kr loo
    if(str[i]==key){
     cout<<i<<endl;
    }
    indexAccess(str,n,i+1,key);
}
int main(){
string str="lovebabbar";
int n=str.length();
int i=0;
char key='b';
indexAccess(str,n,i,key);
    return 0;
}