#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the scores of player 1,2 and 3 =";
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout<<"player 1 is the winner";
    }
    else if (b>a && b>c){
        cout<<"player 2 is the winner";
    }
    else{
        cout<<"player 3 is the winner";
    }
    return 0;
}