#include<iostream>
#include<vector>

using namespace std;
int main(){
    
    vector<int>v;

    vector<int> a(5,1);  //a(size,initialize 1)

    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size"<<v.size()<<endl;

    cout<<"element at 2nd index"<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}