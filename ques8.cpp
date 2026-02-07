#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number =";
    cin>>n;
    if (n%3==0){
        cout<<"Buzz";
    }
    if (n%5==0){
        cout<<" Fuzz ";
    }if (n%3==n%5){
        cout<<" both tags";
    }
return 0;
}