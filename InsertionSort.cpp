#include<iostream>
using namespace std;
int main()
{
    int arr[50], n, i, j, k, elem, index;
    cout<<"Enter the Size for Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: ";
    for(i=0; i<n; i++)
    {
     cin>>arr[i];
     }
    for(i=1; i<n; i++)
    {
        elem = arr[i];
        if(elem<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = elem;
    }
    cout<<"\nThe New Array (Sorted Array):\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}