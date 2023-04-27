#include<bits/stdc++.h>
using namespace std;
bool palindrone(char word[]){
    int i=0;
    int j=strlen(word)-1;
    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
char word[100];
cin>>word;
if(palindrone(word)){
    cout<<"yes palindrone "<<endl;
}
else{
    cout<<"not palindrone "<<endl;
}

    return 0;
}