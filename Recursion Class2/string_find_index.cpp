#include<bits/stdc++.h>
using namespace std;
int find(string str, int n,int i,char key){
//base case 
if(i>=n){
    return -1;
}
if(str[i]==key){
    return i;
}
return find(str,n,i+1,key);
}
int main(){
string str="lovebabbar";
int n=str.length();
int i=0;
char key='r';
cout<<find(str,n,i,key);
    return 0;
}