#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v{3,1,2,7,6,5};
// outer loop 
for(int i=0;i<v.size()-1;i++){
    int miniIndex=i;
    //Inner loop   
    for(int j=i+1;j<v.size();j++){
        if(v[j]<v[miniIndex]){
            miniIndex=j;
        }
    }
    swap(v[i],v[miniIndex]);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

    return 0;
}