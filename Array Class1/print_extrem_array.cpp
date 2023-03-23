#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={1,2,3,4,5};
 int n=5;   
int i=0;
int j=n-1;
while(true){
    if(i>j)
    break;
    if(i==j){
        cout<<arr[i]<<" ";
    }
    else{
        cout<<arr[i]<<" ";
        
        cout<<arr[j]<<" ";
    }
    i++;
    j--;
}
    return 0;
}