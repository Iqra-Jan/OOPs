#include<iostream>
#include<string>
using namespace std;
class ElectricityBill{
 string name;
 int units;
 float charges;
 float totalbill;
 public:
     void input(){
        cin>>name>>units>>charges;
     }
     void calculate(){
        totalbill = units*charges;
    }
    void display(){
        cout<<"Total bill amount = "<<totalbill<<endl;
    }
};
int main(){
    ElectricityBill E;
    cout<<"Enter Consumer name , units consumed and charges per unit : ";
    E.input();
    E.calculate();
    E.display();
    return 0;
}