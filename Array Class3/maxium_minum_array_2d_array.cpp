#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[][3], int r,int c){
int maxi=INT_MIN;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(arr[i][j]>maxi)
        maxi=arr[i][j];
    }
}
return maxi;
}
int getmin(int arr[][3], int r, int c){
int mini=INT_MAX;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(arr[i][j]<mini)
        mini=arr[i][j];
    }
}
return mini;
}
int main(){
int arr[3][3];
int r=3;
int c=3;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
cout<<"maxium value "<<getmax(arr,r,c)<<endl;
cout<<"minumum value "<<getmin(arr,r,c)<<endl;

    return 0;
}