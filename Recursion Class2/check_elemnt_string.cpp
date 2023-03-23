#include<bits/stdc++.h>
using namespace std;
bool find(string str,int n,int i,char key){
    //base case 
    if(i>=n){
        return false;
    }
    //ek case check kr loo
    if(str[i]==key){
        return true;
    }
    //bakki recursion sambal lega 
     bool ans= find(str,n,i+1,key);
     return ans;

}
int main(){
string str="lovebabbar";
int n=str.length();
int i=0;
char key='o';
bool ans=find(str,n,i,key);
cout<<ans<<endl;
    return 0;
}