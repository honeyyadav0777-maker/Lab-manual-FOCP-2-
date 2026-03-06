#include<iostream>
using namespace std;
void swap(int *a , int *b){
    cout<<"A and B before swap in function "<<*a<<*b;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"A and B after swap in function"<<*a<<*b;
}
int main(){
    int x,y;
    cout<<"provide two integer"<<endl;
    cin>>x>>y;
    cout<<"X and Y before swap in main"<<x<<y;
    swap(&x,&y);
    cout<<"X and Y after swap in main"<<x<<y;
}