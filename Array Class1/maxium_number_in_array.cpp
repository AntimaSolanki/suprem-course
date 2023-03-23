#include<bits/stdc++.h>
using namespace std;
int max(int arr[], int n){
  int maxi=INT_MIN;
for(int i=0;i<n;i++){
  if(arr[i]>maxi)
   maxi=arr[i];
}
return maxi;
}
int min(int arr[], int n){
int mini=INT_MAX;
for(int i=0;i<n;i++){ 
  if(arr[i]<mini){
   mini =arr[i];
  }
}
return mini;
}
int main(){
int arr[]={1,2,3,4,5};
int n=5;
cout<<"maxium element ->"<<max(arr,n)<<endl;
cout<<"minium element "<<min(arr,n)<<endl;
    return 0;
}