#include<iostream>
using namespace std;
class Temperature{
public:
    void ctoF(float c){
        cout<<"ferenheit = "<<(c*9/5)+32<<endl;
    }
   void Ftoc(float f){
    cout<<"celsius = "<<(f-32)*5/9<<endl;
   }

};
int main(){
    Temperature t;
    t.ctoF(37);
    t.Ftoc(98.3);
    return 0;
}