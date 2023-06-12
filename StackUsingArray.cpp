#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;
void push(int element){
    if(top>=n){
        cout<<"Stack is Full";
    }
    else{
        top++;
        stack[top]=element;
    }
}
void pop(){
    if(top<=-1){
        cout<<"Stack is Empty";
    }
    else{
        cout<<"Element popped out is "<<stack[top];
        cout<<endl;
        top--;
    }
}
void display(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Stack is Empty";
    }
}
int main(){
    int i,elem;
    while(1){
        cout<<"\nTell me what you want? ...";
        cout<<"\n Enter 0 for displaying";
        cout<<"\n 1 for deletion(pop)";
        cout<<"\n 2 for insertion(push)";
        cout<<"\n 3 for exiting: ";
        cin>>i;
        switch(i){
            case 0:
            display();
            break;
            case 1:
            pop();
            break;
            case 2:
            cout<<"Enter the element ";
            cin>>elem;
            push(elem);
            break;
            case 3:
            exit(1);
            default:
            cout<<"Wrong choice";
        }
    
    }
    return 0;
}