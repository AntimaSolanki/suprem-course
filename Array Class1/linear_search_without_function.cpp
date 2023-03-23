#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3};
int n=3;
int key;
cin>>key;
bool flag=0;
for(int i=0;i<n;i++){
    if(arr[i]==key)
    flag=1;
}
if(flag==0){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

    return 0;

}