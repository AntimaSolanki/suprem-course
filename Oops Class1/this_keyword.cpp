#include<bits/stdc++.h>
using namespace std;
class Animal{
    private:
    int weight;
    void sleep(){
        cout<<"sleeping"<<endl;
    };
    void play(){
        cout<<"playing "<<endl;
    };
    int getWeight(){
        return weight;
    };
    int setWeight(int weight){
        this->weight=weight;
    };

};

int main(){
//Animal* ramesh=new Animal;
//ramesh->setWeight(60);
//cout<<ramesh->getWeight()<<endl;

//Animal ramesh;
//ramesh.setWeight(60);
//cout<<getWeight()<<endl;

    return 0;
}