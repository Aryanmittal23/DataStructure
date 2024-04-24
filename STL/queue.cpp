#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string>q;

    q.push("Aryan");
    q.push("Mittal");

    cout<<"first element"<<" "<<q.front()<<endl;

    cout<<"size"<<" "<<q.size()<<endl;
}