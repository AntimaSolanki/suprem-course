#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[4][3];
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
cout<<"Printing Colum wise "<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
    return 0;
}