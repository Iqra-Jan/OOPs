#include<iostream>
using namespace std;
class BMI{
float weight , height;
public:
    BMI(float w, float h){
        weight = w;
        height = h;
    }
    void calculate(){
        float bmi= weight/(height*height);
        cout<<"BMI = "<<bmi ;
      if(bmi<18.5){
        cout<<"underweight"<<endl;}
    else if(bmi<25){
        cout<<"normal"<<endl;}
    else{
        cout<<"overweight"<<endl;

    }    
    }
};
int main(){
    BMI a(40,1.2);
    a.calculate();
    return 0;
}