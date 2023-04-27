#include<bits/stdc++.h>
using namespace std;
int compareFunction(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    else{
        int i=0;
        int j=0;
        while(i<a.length()){
          if(a[i]==b[j]){
            return true;
          }
        }
        i++;
        j++;
    }
}
int main(){


    return 0;
}