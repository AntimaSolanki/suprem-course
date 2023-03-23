#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,1,1,1,0,0,1,1,0,0};
int n=15;
int zeroes=0;
int ones=0;
for(int i=0;i<n;i++){
    if(arr[i]==0)
    zeroes++;
    if(arr[i]==1)
    ones++;
}
cout<<" no of zeroes->"<<zeroes <<endl;
cout<<"no of ones ->"<<ones<<endl;
    return 0;
}