#include<iostream>
using namespace std;
class Account{
    protected: float balance;
public: Account(float b){balance = b;}
};
class SavingsAccount: public Account{
    public:
    SavingsAccount(float b) : Account(b){};
    void deposit(float amount){
        balance += amount;
    }
    void withdraw(float amount){
        if(amount<=balance){
            balance -= amount;
        }else{
            cout<<"insufficient balance!"<<endl;
        }
    }
    void display(){
        cout<<"Balance = "<<balance<<endl;
    }
};
int main(){
   
    SavingsAccount s(1000);
    s.deposit(500);
    s.withdraw(200);
    s.display();
}