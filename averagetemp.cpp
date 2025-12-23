#include<iostream>
using namespace std;
int main(){
   int temp;
   int hot = 0; int pleasant = 0; int cold = 0;
   float count = 0; int sum = 0;
   cout<<"enter temperature(enter -1 to break): ";
   while(true){
   cin>>temp;
   if(temp==-1)
   break;
   if(temp>=85){
   cout<<"hot day: "<<temp<<endl;
   hot++;}
   else if(temp>=60){
   cout<<"pleasant day: "<<temp<<endl;
   pleasant++;}
   else{
    cout<<"cold day: "<<cold<<endl;
    cold++;
   }
   sum += temp;
   count++;
   }
float average = sum/count;

   cout<<"hot days : "<<hot<<endl;
   cout<<"pleasant days : "<<pleasant<<endl;
   cout<<"cold days : "<<cold<<endl;
   cout<<"average : "<<average<<endl;

    return 0;
}