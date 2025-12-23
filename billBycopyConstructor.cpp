#include<iostream>
using namespace std;
class Bill{
    float units;
public:
    Bill(float u){
        units = u;
    }
    Bill(Bill &b){
        units = b.units;
    }
    void totalbill(){
        cout<<"totall bill = "<<units*5<<endl;
    }
};
int main(){
    Bill b1(100);
    Bill b2 = b1;
    b1.totalbill();
    b2.totalbill();
    return 0;
}