#include<iostream>
int main()
{ float quantity,unit_price,item_no;
    std::cout<<"enter item no :";
    std::cin>>item_no;
    std::cout<<"\nenter quantity :";
    std::cin>>quantity;
    std::cout<<"\nenter unit_price :";
    std::cin>>unit_price;
    std::cout<<"\ndiscount :"<<(unit_price*quantity)*2/10;
    std::cout<<"\ntotal bill :"<<(unit_price*quantity)*8/10;
    
    
    return 0;
}