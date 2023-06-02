#include<bits/stdc++.h>
using namespace std;
class Animal{
private:
int weight;
public:
int age;
string name;
//state and properites 
void eat(){
cout<<"Eating"<<endl;
}
void sleep(){
cout<<"Sleepping"<<endl;
}
int getweight(){
    return weight;
}
//int setweight(int w){
  //  weight=w;
//}
int setweight(int weight){
   this-> weight=weight;
}
};
int main(){
//Object Creation 

//Static 
Animal ramesh ;
ramesh.age=22;
ramesh.name="Antima";
cout<<"age of ramesh :"<<ramesh.age<<endl;
cout<<"name of ramesh :"<<ramesh.name<<endl;
//cout<<"weight of ramesh :"<<ramesh.weight<<endl;-->

ramesh.eat();
ramesh.sleep();

ramesh.setweight(45);
cout<<"weight"<<ramesh.getweight()<<endl;

//Dynamic 
Animal *suresh=new Animal;
(*suresh).age=22;
(*suresh).name="Anu";

//second way to dynmaically 
suresh->age=22;
suresh->name="anu";

(*suresh).eat();
(*suresh).sleep();

//second way to do dynamicallly
suresh->eat();
suresh->sleep();
    return 0;
}