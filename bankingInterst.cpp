#include<iostream>
using namespace std;
class BankAccount{
    public:
    virtual float interst(){
        return 0;
    }
};
class Savingsaccount: public BankAccount{
public:
 float interst(){
    return 1000*0.07;
}
};
class fixeddeposit: public BankAccount{
public:
 float interst(){
    return 1000*0.04;
}
};
class recurringDeposit: public BankAccount{
public:
 float interst(){
    return 1000*0.06;
}
};
int main(){
    BankAccount *b;
    Savingsaccount s;
    fixeddeposit f;
    recurringDeposit r;

  b = &s;cout<<"interest = "<<b->interst()<<endl;
  b = &f;cout<<"interest = "<<b->interst()<<endl;
  b = &r;cout<<"interest = "<<b->interst()<<endl;
   

  return 0;

}