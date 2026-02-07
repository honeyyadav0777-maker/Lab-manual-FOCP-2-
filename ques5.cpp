#include<iostream>
int main()
{int a=10,b=17,c;
   std::cout<<"original values of a and b :"<<a<<" "<<b;
    c=a;
    a=b;
    b=c;
std::cout<<"\nswapped values of a and b :"<<a<<" "<<b;


   
    return 0;
}