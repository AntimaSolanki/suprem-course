#include<bits/stdc++.h>
using namespace std;
class Fruit{
public:
string name;
};
class Mango:public Fruit{
    public:
int weight ;
};
class Alphnsio :public Mango{
  public:
int sugarLevel;

};
int main(){
Alphnsio a;
cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;
    return 0;
}