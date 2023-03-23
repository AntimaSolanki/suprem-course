#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,2,2,2,2,5,5,0,0,0};
int n=15;
int Twos=0;
for(int i=0;i<n;i++){
    if(arr[i]==2)
    Twos++;
}
cout<<"no of twos "<<Twos<<endl;
    return 0;
}