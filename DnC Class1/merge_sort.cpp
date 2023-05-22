#include<bits/stdc++.h>
using namespace std;
void merge(int* arr,int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    //int arr[n];--->>it is bad pratices 
    int* left=new int[len1];
    int* right=new int[len2];

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }
    //merge logic 
     int leftIndex=0;
     int rightIndex=0;
     int mainArrayIndex=s;

      while(leftIndex<len1&&rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex++]=left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++]=right[rightIndex++];
        }
      }
      while(right[rightIndex]<len2){
        arr[mainArrayIndex++]=right[rightIndex++];
      }
      while(left[leftIndex]<len1){
        arr[mainArrayIndex]=left[leftIndex++];
      }

    }
void mergersort(int* arr, int s,int e){
    //base case 
    //if(s==e)-> single case 
    //if(s>e)->  invalid array
    if(s>=e)
        return ;
    int mid=s+(e-s)/2;
    //left side mai ja kr dekho 
    mergersort(arr,s,mid);

    //right side mai ja kr dekho 
    mergersort(arr,mid+1,e);

    merge(arr,s,e);
    
}
int main(){
int arr[]={4,1,2,3,5};
int n=5;
int s=0;
int e=n-1;
mergersort(arr,s,e);

    return 0;
}