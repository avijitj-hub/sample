#include<iostream>

using namespace std;

int main()
{
    int arr[] = {26,-12,47,0,-31};
    int temp;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}