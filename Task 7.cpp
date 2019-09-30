#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x,y;
    cout<<"Enter 2 numbers to be swapped: ";
    cin>>x>>y;
    swap(x,y);
    cout<<"\nAfter swapping: x="<<x<<" , y="<<y;
    return 0;
}
