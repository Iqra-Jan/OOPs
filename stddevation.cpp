#include<iostream>
#include<cmath>
using namespace std;
int main(){
int N;
cout<<"enter number of elements: ";
cin>>N;
int num, smallest, largest;
int sum= 0;
int sumsqrs= 0;
   for(int i=0; i<N; i++){
  cin>>num;
  if(i==0){
    smallest = largest = num;
  }
 if(num<smallest)
 smallest = num;
 if(num>largest)
  largest = num;

  sum += num;
  sumsqrs += num*num;

   }

float average = sum/N;
float variance = (sumsqrs/N) - average*average;
float stdev = sqrt(variance);
float range = largest - smallest;


cout<<"range = "<<range<<endl;
cout<<"standard devation = "<<stdev<<endl;



    return 0;
}