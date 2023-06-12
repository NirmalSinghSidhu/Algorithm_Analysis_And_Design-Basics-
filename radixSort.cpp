using namespace std;
#include<iostream>

int getMax(int arr[],int n){
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    return m;
}

void countingSort(int arr[],int size,int place){
    const int max=10;
    int output[size];
    int count[max];

    for(int i=0;i<max;i++){
        count[i]=0;
    }

    for (int i = 0; i < size; i++){
      count[(arr[i] / place) % 10]++;
    }

    for (int i = 1; i < max; i++){
          count[i] += count[i - 1];
    }

     for (int i = size - 1; i >= 0; i--) {
    output[count[(arr[i] / place) % 10] - 1] = arr[i];
    count[(arr[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++){
    arr[i] = output[i];
  }

}

void radixSort(int arr[],int size){
    int max = getMax(arr, size);
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(arr, size, place);
}

void printArray(int arr[],int n){
    int i=0;
   for(i=0; i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main() {
    int n;
    int A[50];
  cout<<"Enter the Size of the Array";
  cout<<endl;
  cin>>n;
  cout<<"Enter "<<n<<" Elements";
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cout<<"\nArray Before Sorting";
  cout<<endl;
  printArray(A,n);
  radixSort(A, n);
  cout<<"\nArray after performing radix sort";
  cout<<endl;
  printArray(A, n);
}