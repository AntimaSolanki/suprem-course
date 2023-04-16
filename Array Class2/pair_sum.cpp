#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{10,20,30,40};
int sum=30;
for(int i=0;i<arr.size();i++){
    int element=arr[i];
 for(int j=i+1;j<arr.size();j++){
    if(element+arr[j]==sum){
   cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    }
 }
}

    return  0;
}