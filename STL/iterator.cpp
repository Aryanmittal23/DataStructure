#include<iostream>
using namespace std;
int main(){
vector<int>v
vector<int>::iterator it=v.begin();

it++;
cout<<*(it)<<" ";


vector<int>::iterator it=v.end();
vector<int>::iterator it=v.rbegin();
vector<int>::iterator it=v.rend();

for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}

v.erase(v.begin()+1)

v.insert(v.begin(),500)

}