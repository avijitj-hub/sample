#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int p,q;

    cin>>p>>q;

    cout<<p<<" "<<q<<endl;

    swap(&p,&q);

    cout<<p<<" "<<q<<endl;
}