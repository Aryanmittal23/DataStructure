#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }

    d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"print first index element"<<d.at(1)<<endl;

    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;

    cout<<"empty or not" <<d.empty()<<endl;

    

}