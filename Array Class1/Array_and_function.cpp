#include<bits/stdc++.h>
using namespace std;
int main(){
//int arr[100];
int n;
cin>>n;
//for(int i=0;i<n;i++){
 //   cin>>arr[i];
//}
//for(int i=0;i<n;i++){
//    cout<<2*arr[i]<<" ";
//}
//return 0;
//}

// print the same type of the value 
int arr[5]={2,3,4,5,6};
for(int i=0;i<5;i++){
    arr[i]=1;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
}

return 0;
}