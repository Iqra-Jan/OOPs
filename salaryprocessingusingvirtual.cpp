#include<iostream>
using namespace std;
class Employeee{
    public:
    virtual float calculateSalary(){
        return 0;
    }
};
class FullTimeEmployee: public Employeee{
    float calculateSalary(){
        return 30000;
    }
};
class PartTimeEmployee: public Employeee{
    float calculateSalary(){
        return 15000;
    }
};
class Intern: public Employeee{
    float calculateSalary(){
        return 8000;
    }
};
int main(){
    Employeee *e;
    FullTimeEmployee f;
    PartTimeEmployee p;
    Intern i;


    e = &f; cout<<"Fulltime Salary = "<<e->calculateSalary()<<endl;
    e = &p; cout<<"parttime  Salary = "<<e->calculateSalary()<<endl;
    e = &i; cout<<"Intern Salary = "<<e->calculateSalary()<<endl;
    
return 0;
}