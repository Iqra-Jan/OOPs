#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string Ename; 
    int EmpId;
    float basic;
void inputdetails(){
    cout<<"enter employee name: "<<endl;
    cin>>Ename;
    cout<<"enter emp id: "<<endl;
    cin>>EmpId;
    cout<<"enter basic salary: "<<endl;
    cin>>basic;
}
};
class Salary: public Employee{
    protected:
    float HRA;
    float DA;
    float TAX;
    float NET,GROSS;
    public:
    void display(){
        HRA = 0.20*basic;
        DA = 0.10*basic;
        GROSS = HRA + DA + basic;
        TAX = 0.05*basic;
        NET = GROSS - TAX;
        cout<<"Employee Name: "<<Ename<<endl;
        cout<<"Employee ID: "<<EmpId<<endl;
        cout<<"Basic Salary: "<<basic<<endl;
        cout<<"house rent assurance : "<<HRA<<endl;
        cout<<"Dearness Assurance: "<<DA<<endl;
        cout<<"Gross = "<<GROSS<<endl;
        cout<<"tax deducted "<<TAX<<endl;
        
        cout<<"NET SALARY = "<<NET<<endl;
        
    }

};
int main(){
    Salary E1;
    cout<<"enter employee details "<<endl;
    E1.inputdetails();
    cout<<"EMPLOYEE SALARY SLIP!!!"<<endl;
    E1.display();
    return 0;
}