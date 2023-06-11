#include<bits/stdc++.h>
using namespace std;
class Car{
public:
int age;
int weight;
void speedUp(){
    cout<<"Speeding "<<endl;
  }
};
class Scropio:public Car{

};
class Fortuner:public Car{

};


int main(){
Scropio s11;
s11.speedUp();

Fortuner f11;
f11.speedUp();

    return 0;
}