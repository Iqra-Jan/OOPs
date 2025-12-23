#include<iostream>
using namespace std;
class Distance{
    int m,cm;
public:
  Distance(float x){
    m = x;
  }
  Distance(float x, float y){
    m = x;
    cm = y;
  }
  Distance add(Distance d){
    Distance temp(0,0);
    temp.cm = cm + d.cm;
    temp.m = m + d.m + temp.cm/100;
    temp.cm= temp.cm % 100;
    return temp;
  }
  void display(){
    cout<<m<<" meter  "<<cm<<" centimeters";

  }
};
int main(){
    Distance d1(4,3);
    Distance d2(5);
    Distance d3 = d2.add(d1);
    d3.display();
    return 0;
}