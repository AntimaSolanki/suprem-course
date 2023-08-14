#include<bits/stdc++.h>
using namespace std;
class para{
   public:
   int val;
   void operator+(para& obj2){
    int value1= this->val;
    int value2= obj2->val;
    cout<<(value2-value1)<<endl;

   }
};

int main(){
para obj1,obj2;
obj1.val=1;
obj2.val=2;
obj1+obj2;

    return 0;
}