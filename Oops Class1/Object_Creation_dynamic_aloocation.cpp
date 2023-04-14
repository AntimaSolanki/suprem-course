#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
int age;
string name;
void eat(){
    cout<<"eating "<<endl;
}
void sleep(){
    cout<<"sleeping "<<endl;
}
void play(){
    cout<<"playing "<<endl;
}
};
int main(){
//object creaton -->dyynamic allocation 
Animal* suresh=new Animal;
(*suresh).age=12;
(*suresh).name="Anu";

//alternate  way
suresh->age=22;
suresh->name="Antima";

suresh->eat();
suresh->play();
    return 0;
}