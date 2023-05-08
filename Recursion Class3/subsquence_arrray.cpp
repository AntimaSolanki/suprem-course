#include<bits/stdc++.h>
using namespace std;
void subSuq(string str,string output ,int i){
//base case 
if(i>=str.length()){
    cout<<output<<endl;
    return;
}
//exculde 
subSuq(str,output,i+1);
//include 
output.push_back(str[i]); //output=output+str[i]
subSuq(str,output,i+1);
}
int main(){
string str="abc";
string output=" ";
int i=0;
subSuq(str,output,i);

return 0;
}