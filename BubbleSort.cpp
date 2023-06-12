#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int A[50];
    int n;
    cout<<"\nEnter the size of the Array";
    cout<<endl;
    cin>>n;
    cout<<"\nEnter the "<<n<<" Elements";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Array Before Sorting";
    cout<<endl;
    printArray(A,n);
    bubbleSort(A,n);
    cout<<"\nElements of the array after performing the bubble sort ";
    cout<<endl;
    printArray(A,n);
    return 0;

}