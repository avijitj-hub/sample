#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Student
{
    string name;
    int id;
    static int count;

    public:
        void getData()
        {
            //system("CLS");
            fflush(stdin);
            getline(cin,name);
            cout<<"status"<<endl;
            cin>>id;
            count++;
        }

        void displayData()
        {
            cout<<name<<endl;
            cout<<id<<endl;
            cout<<count<<endl;
            cout<<"Data for Student finished"<<endl;
            //getch();
        }
};

int Student::count;

int main()
{
    Student s1;
    s1.getData();
    s1.displayData();

    Student s2;
    s2.getData();
    s2.displayData();
}