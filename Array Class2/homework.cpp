#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={10,20,30,40,50};
int n=5;
int sum=100;
for(int i=0;i<n;i++){
    int element1=arr[i];
    for(int j=i+1;j<n;j++){
        int element2=arr[j];
        for(int k=j+1;k<n;k++){
            int element3=arr[k];
            for(int p=k+1;p<n;p++){
                int element4=arr[p];

                if(element1+element2+element3+element4==sum){
                    cout<<"("<<element1<<","<<element2<<","<<element3<<","<<element4<<")"<<endl;
            }
            }
        }

}

}
return 0;
}