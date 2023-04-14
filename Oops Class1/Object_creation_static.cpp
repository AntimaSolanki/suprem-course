#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
int age;
string name;
//behaviour 
void sleep(){
cout<<"sleeping"<<endl;
}
void eat(){
cout<<"Eating"<<endl;
}
void play(){
cout<<"Playing"<<endl;
  }
};
int main(){
//Object Creation
Animal ramesh;
//insertion of values
ramesh.age=22;
ramesh.name="antima";
//static
cout<<"Age of ramesh "<<ramesh.age<<endl;
cout<<"Name of ramesh "<<ramesh.name<<endl;


ramesh.eat();
ramesh.sleep();
ramesh.play(); 
    return 0;
}