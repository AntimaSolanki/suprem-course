#include<bits/stdc++.h>
using namespace std;
// two pointer apporach 
bool palindrome(char name[]){
int i=0,j=strlen(name)-1;
while(i<=j){
    if(name[i]!=name[j]){
        return false;
    }
    else {
        i++;
        j--;
    }
}
return true;
}
int main(){
char word[100];
cin>>word;
if(palindrome(word)){
    cout<<"true"<<endl;
}
else {
    cout<<"false "<<endl;
}
    return 0;
}
