#include<iostream>
using namespace std;
class Box{
float len, wid, height;
public: 
  void input(){
    cin>>len>>wid>>height;
  }
  void volume(){

    cout<<"volume of box = "<<len*wid*height;

  }
};
int main(){
    Box b;
    cout<<"enter length , width and height of box : ";
    b.input();
    b.volume();
    return 0;
}