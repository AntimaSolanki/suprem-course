#include<bits/stdc++.h>
using namespace std;
bool checkSort(vector<int>arr,int n,int i){
    //base case 
    if(i==n-1)
    return true;
    if(arr[i+1]<arr[i])
    return  false ;
 return checkSort(arr,n,i+1);

}
int main(){
vector<int>v{10,20,30,40};
int n=v.size();
int i=0;
if(checkSort(v,n,i)){
    cout<<"true"<<endl;
}
else {
    cout<<"false"<<endl;
}
    return 0;
}