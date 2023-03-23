#include<bits/stdc++.h>
using namespace std;
bool compare(string a, string b){
    if(a.length()!=b.length())
    return false;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i])
        return false;
    }
    return true;
}
int main(){
string s;
string r;
cin>>s;
cin>>r;
if(compare(s,r)){
    cout<<"true"<<endl;
}
else {
    cout<<"false"<<endl;
}
    return 0;
}