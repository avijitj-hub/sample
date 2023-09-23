#include<iostream>

using namespace std;

int main()
{
    int numerator,denominator,result;

    cin>>numerator>>denominator;

    try
    {
        if(denominator==0)
            throw denominator;
        result = numerator/denominator;
        cout<<result<<endl;
    }
    catch(int ex)
    {
        cout<<"Exception:Division by 0 is not allowed:"<<ex<<endl;
    }        
}