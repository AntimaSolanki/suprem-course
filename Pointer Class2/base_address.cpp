#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={12,13,14,15};
cout<<arr<<endl;
cout<<&arr<<endl;
cout<<&arr[0]<<endl;
cout<<arr[0]<<endl;

int* p=arr;
cout<<p<<endl;
cout<<&p<<endl;
   return 0; 
}