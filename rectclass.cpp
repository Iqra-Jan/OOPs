#include<iostream>
using namespace std;
class Rectangle{
float length, breadth;
public:
void input(){
    cin>>length>>breadth;
}

void display(){
    cout<<"area of rectangle: "<<length*breadth<<endl;
    cout<<"perimeter of rectangle: "<<(2*(length+breadth))<<endl;
}
};
int main(){
    Rectangle r;
    cout<<"enter length and breadth : ";
    r.input();
    r.display();
    return 0;
}