#include<iostream>

using namespace std;

int main()
{
    int var = 1;
    int op;

    op = var & (0x02);

    if(op == 2)
        cout<<"2nd bit is set";
    else
        cout<<"2nd bit is not set";
}