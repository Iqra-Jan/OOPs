#include<iostream>
using namespace std;
class Average{
int a, b,c;
public:
  void input(){
    cin>>a>>b>>c;
  }
  void calculate(){
    cout<<"average of inputted 3 numbers is : "<<(a+b+c)/3.0<<endl;
  }

};
int main(){
    Average a;
    cout<<"enter three integers to get their average : ";
    a.input();
    a.calculate();
    return 0;
}