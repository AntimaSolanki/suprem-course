#include<bits/stdc++.h>
using namespace std;
bool cmp(char f ,char s){
    return f<s;
}
int main(){
string s="babbar";
sort(s.begin(),s.end(),cmp);
cout<<s<<endl;

//vector<int>v{1,2,3,4,0};
//sort(s.begin(),s.end(),cmp);



return 0;
}