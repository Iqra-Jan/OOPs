#include<iostream>
using namespace std;
class transport{
    public:
    virtual float fare(float d) = 0;
};
class Bus: public transport{
    public:
    float fare(float d){
        return d*2;
    }
};
class train: public transport{
    public:
    float fare(float d){
        return d*3;
    }
};
class flight: public transport{
    public:
    float fare(float d){
        return d*5;
    }
};
int main(){
    transport *t;
    Bus b;
    train tr;
    flight f;
t = &b;cout<<"fare through bus = "<<t->fare(100)<<endl;
t = &tr;cout<<"fare through train = "<<t->fare(100)<<endl;
t = &f;cout<<"fare through flight = "<<t->fare(100)<<endl;
 return 0;
}
