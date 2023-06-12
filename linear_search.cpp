#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int k;
    int n=10;
    int arr[]={1,2,3,12,34,113,34,23,45};
    cout<<"\nenter the element to be searched";
    cin>>k;
    int result =linearSearch(arr,n,k);
    if(result==-1){
        cout<<"\nElement not found ";
    }
    else{
        cout<<"\nElement found at index "<<result;
    }
return 0;
}