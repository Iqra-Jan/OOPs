#include<iostream>
using namespace std;
int main(){
int guests, chairs;
int ways = 1;
cout<<"enter number of guests : ";
cin>>guests;
cout<<"enter number of chairs : ";
cin>>chairs;
  for(int i = 0; i<chairs; i++){
    ways = ways*(guests - i);
  }

cout<<"number of arrangements : "<<ways;
    return 0;
}