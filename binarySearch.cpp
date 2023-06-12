#include<iostream>
using namespace std;
int BinarySearch(int arr[],int s, int l,int k){
int mid=(s+l)/2;
while(s<=l){
    if(mid==k){
        return mid; 
    }
    else if(k<mid){
        return BinarySearch(arr,s,mid-1,k);
    }
    else{
        return BinarySearch(arr,mid+1,l,k);
    }
}
return -1;
}
int main(){
    int a[]={11,22,33,44,55,66,77,88,99,100};
   int r= BinarySearch(a,0,9,55);
   cout<<"hello";
   cout<<r;
return 0;
}