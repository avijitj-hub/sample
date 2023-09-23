#include<iostream>

using namespace std;

int sum(int a,int b)
{
    return (a+b);
}

int sum(int a,int b,int c)
{
    return (a+b+c);
}

int main()
{
    char p=1,q=2;

    cout<<sum(p,q)<<endl;

    cout<<sum(1,2,3)<<endl;
}