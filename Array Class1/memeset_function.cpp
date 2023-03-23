#include<bits/stdc++.h>
using namespace std; 
int main(){
int arr[5]={1,2,3,4,5};
int n=5;
for(int i=0;i<n;i++){
 arr[i]=1;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;


cout<<"USING MEMESET FUNCTION "<<endl;

int brr[10]={0};
//memset(brr,2,brr+10);
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}cout<<endl; 

return 0;

}