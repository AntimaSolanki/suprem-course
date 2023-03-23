#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{1,2,37,65,4,9};
// outer loop
for(int round=1;round<arr.size();round++){
    bool swapped=false;
    for(int j=0;j<arr.size()-round;j++){
        if(arr[j]>arr[j+1]) 
        swapped=true;
        swap(arr[j],arr[j+1]);
    }
    if(swapped==false ){
        // sort ho chuka hai 
        break;
    }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";  
    }


    return 0;
}