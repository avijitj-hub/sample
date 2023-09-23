#include<iostream>

using namespace std;

int main()
{
    int arr[] = {-2,3,-4,0,2};
    int key,flag = 0;

    cin>>key;

    for(int i=0;i<5;i++)
    {
        if(arr[i] == key)
        {
            cout<<i<<endl;
            flag=1;    
        }    
    }
    if(flag==0)
    cout<<-1<<endl;    

}