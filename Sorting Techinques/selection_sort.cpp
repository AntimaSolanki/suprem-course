#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{10,30,20,40,50};
//outer loop ->(n-1)rounds
for(int i=0;i<arr.size();i++){
    int midIndex=i;
    //inner loop ->index of minmum indexx in ranf=ge i to 
    for(int j=i+1;j<arr.size();j++){
        if(arr[j]<arr[midIndex]){
            midIndex=j;
        }
    }
    //swap
    swap(arr[i],arr[midIndex]);
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}