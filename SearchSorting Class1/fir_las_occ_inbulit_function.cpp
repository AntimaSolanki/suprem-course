#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v{1,2,3,4,5,6,4,4,4};
int target=4;
//auto ans1=(lower_bound(v.begin(),v.end(),target));
//cout<<"first Occ ->"<<ans1-v.begin()<<endl;
//cout<<" Last Occ->"<<ans1-v.end()<<endl;

auto ans2=(upper_bound(v.begin(),v.end(),target));
cout<<"first  Occ->"<<ans2-v.begin()<<endl;
cout<<"last Occ ->"<<ans2-v.end()<<endl;
    return 0;
}