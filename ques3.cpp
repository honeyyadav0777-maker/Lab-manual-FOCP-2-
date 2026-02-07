#include<iostream>
int main()
{ float tempf;
    std::cout<<"enter the temperature reading in fahrenhite :";
    std::cin>>tempf;
    std::cout<<"temperature in centigrade :"<<(tempf-32)*5/9;
    
    
    return 0;
}