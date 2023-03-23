#include<bits/stdc++.h>
using namespace std;
int main(){
//declare 2D array 
int arr[3][3];

//initialsation
int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
cout<<brr<<" ";


cout<<"Row wise printing "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"column wie printing "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<brr[j][i]<<" ";
    }
    cout<<endl;
}

return 0;
}