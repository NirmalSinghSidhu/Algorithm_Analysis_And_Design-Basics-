#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, num, index;
    int flag=0;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            flag++;
            break;
        }
    }
    if(flag>0){
    cout<<"\nFound at Index No."<<index;
    cout<<endl;
    }
    else{
         cout<<"\nNot Found.";
    }
    return 0;
}
