#include<iostream>
using namespace std;
class Interest{
float p,r,t;
public:Interest(float p1, float r1, float t1){
    p = p1;
    r = r1;
    t = t1;
}
void calculate(){
    cout<<"Simple Interest = "<<(p*r*t)/100<<endl;
}
};
int main(){
    Interest i(2000,5,2);
    i.calculate();
    return 0;
}