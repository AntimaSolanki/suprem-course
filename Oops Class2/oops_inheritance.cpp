#include<bits/stdc++.h>
using namespace std;
class Animal{
    public: 

    int age;
    int weight;

  void eat(){
    cout<<"eating "<<endl;
  }
};
class Dog:public Animal{

};

int main(){
    Dog d1;
    d1.eat();
    cout<<d1.age<<endl;
    return 0;
}