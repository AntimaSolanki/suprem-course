#include<bits/stdc++.h>
using namespace std;
void printSubSuq(string str, string output,int i,vector<string>& ans){
    //base case
    if(i>=str.length()){
        ans.push_back(output);
        return ;
    }
    //exclude
    printSubSuq(str,output,i+1,ans);

    //include
    output.push_back(str[i]);
    printSubSuq(str,output,i+1,ans);
}
int main(){
string str="abc";
string output=" ";
int i=0;
vector<string>ans;
printSubSuq(str,output,i,ans);
cout<<"subsqunce is "<<endl;
for(auto val:ans){
    cout<<val<<endl;
}

return 0;
}