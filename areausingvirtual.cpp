#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area() = 0;
};
class circle: public shape{
    public:
    float r;
    circle(float radius){r = radius;}
    float area(){
        return 3.14*r*r;
    }
};
class rectangle: public shape{
    public:
    float l,b;
    rectangle(float length, float breadth){l = length; b = breadth;}
    float area(){
        return l*b;
    }
};
class square: public shape{
    public:
    float s;
    square(float side){s = side;}
    float area(){
        return s*s;
    }
};
int main(){
    shape *s;
    circle c(3);
    rectangle re(2,5);
    square sq(4);

s = &c; cout<<"area of circle = " <<s->area()<<endl;
s = &re; cout<<"area of rect = " <<s->area()<<endl;
s = &sq; cout<<"area of square = " <<s->area()<<endl;
return 0;
}
