#include<iostream>
using namespace std;

int main()
{
    int choice,a,b;

    do
    {
        cout<<"\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\n";
        cin>>choice;

        if(choice<=4)
        {
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }

        switch(choice)
        {
            case 1: cout<<"Sum="<<a+b; break;
            case 2: cout<<"Sub="<<a-b; break;
            case 3: cout<<"Mul="<<a*b; break;
            case 4: cout<<"Div="<<a/b; break;
        }

    }while(choice!=5);

    return 0;
}