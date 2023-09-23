#include<iostream>

using namespace std;

int main()
{
    char str[] = "World";
    char *cptr = str;
    //char *cptr = "Hello";
     
    cout<<*cptr<<endl;

    cptr[1] = 'p';

    cout<<cptr[1]<<endl;

    int i=0;

    while(cptr[i]!='\0')
    {
        cout<<cptr[i];
        i++;
    }
}