#include<iostream>
using namespace std;
class Item{
    int *price, *qty;
public:
    Item(int p, int q){
        price = new int;
        qty = new int;
        *price = p;
        *qty = q;
    }
    void calculate(){
        cout<<"total cost = "<<(*price)*(*qty);
    }
    ~Item(){
        delete price;
        delete qty;
    }
};
int main(){
    Item i(200,2);
    i.calculate();
    return 0;

}