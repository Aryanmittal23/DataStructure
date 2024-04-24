#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int ,string> m;
     
    m[1]="Aryan";
    m[13]="me";
    m[2]="mittal";

    //m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13->"<<m.count(13)<<endl;
}