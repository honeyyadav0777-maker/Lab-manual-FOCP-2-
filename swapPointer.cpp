#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
int temp =*a;
*a=*b;
*b=temp;
}
int main(){
    int x=4;
    int y=2;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y;
} 