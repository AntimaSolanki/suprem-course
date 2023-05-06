#include<bits/stdc++.h>
using namespace std;
void printing(int n){
    //base case
    if(n==0){
        return;
    }
    cout<<n<<" ";

    printing(n-1);
}
int main(){
    int n;
    cin>>n;
    printing(n);
    
    return 0;
}