#include<bits/stdc++.h>
using namespace std;
class Animal{
private:
int weight;

public:
int age;
string name;
//Behaviour 
void eat(){
cout<<"eating "<<endl;
};
void sleep(){
    cout<<"sleeping "<<endl;
};
void play(){
    cout<<"playing "<<endl;
};
int getWeight(){
    return weight;
};
int setWeight(int w){
    weight=w;
};
};
int main(){
//static object creation 
Animal ramesh;
//insertion 
ramesh.age=20;
ramesh.name="Anu";

cout<<"age is "<<ramesh.age<<endl;
cout<<"name is "<<ramesh.name<<endl;

ramesh.setWeight(60);
cout<<ramesh.getWeight()<<endl;
    return 0;
}