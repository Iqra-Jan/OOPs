#include<iostream>
using namespace std;
class Robot{
    public:
    virtual void performtask() = 0;
};
class Cleaningrobo: public Robot{
public:
void performtask(){
    cout<<"cleaning surface.."<<endl;
}
};
class SecurityRobo: public Robot{
public:
void performtask(){
    cout<<"monitoring area.."<<endl;
}
};
class DeliveryRobo: public Robot{
public:
void performtask(){
    cout<<"delivering items.."<<endl;
}
};
int main(){
    Robot *r[3];
    Cleaningrobo c;
    SecurityRobo s;
    DeliveryRobo d;

   r[0] = &c;
   r[1] = &s;
   r[2] = &d;
   for(int i=0; i<3; i++){
    r[i]->performtask();
 }
 return 0 ;   
}