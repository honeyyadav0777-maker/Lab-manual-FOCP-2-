#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle();
    Rectangle(int);
    Rectangle(int,int);
    int calculateArea();
    int calculatePerimeter();
    void display();
};
Rectangle::Rectangle(){
    length=breadth=0;
}
Rectangle :: Rectangle(int n){
    length = breadth = n;
}
Rectangle :: Rectangle(int l ,int b){
    length = l;
    breadth = b;
}
int Rectangle:: calculateArea(){
    return length*breadth;
}
int main(){
    int length,breadth;
    cout<<"\n enter length and breadth";
    cin>>length>>breadth;
    Rectangle r1(length,breadth);
    int area = r1.calculateArea();
    cout<<"Area of rectangle is "<<area;

}