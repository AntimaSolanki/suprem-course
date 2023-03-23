#include<bits/stdc++.h>
using namespace std; 
int main(){
vector<int>arr;

// size and capacity
cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;


//insert
arr.push_back(5);
arr.push_back(4);

cout<<"PRINTING arr"<<endl;

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

// remove  // delete 
arr.pop_back();

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

cout<<"PRINTING brr"<<endl;
int n;
cin>>n;

vector<int>brr(n,-1);
cout<<"size is "<<brr.size()<<endl;
cout<<"capacity is "<<brr.capacity()<<endl;

for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
}
cout<<endl;


cout<<"PRINTING crr"<<endl;
vector<int>crr{1,2,3,4,5};
for(int i=0;i<crr.size();i++){
    cout<<crr[i]<<" ";
}
cout<<endl;

cout<<"PRINTING drr"<<endl;
vector<int>drr;


// empty or not 
cout<<"vector arr is empty or not "<<arr.empty()<<endl;
cout<<"vector brr is empty or not "<<brr.empty()<<endl;
cout<<"vector crr is empty or not "<<crr.empty()<<endl;
cout<<"vector drr is empty or not "<<drr.empty()<<endl;


 return 0;

}