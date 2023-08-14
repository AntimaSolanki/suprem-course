#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string name;
    int weigh;
    int modal;

    void SpeedUp(){
        cout<<"Speding "<<endl;
    }
    void breaking(){
        cout<<"Break"<<endl;
    }



};
class Scrpio :public Car{

};

int main(){
    //cout<<"Hello world !"<<endl;
    Scrpio barbarwali;
    barbarwali.SpeedUp();


    return 0;
}