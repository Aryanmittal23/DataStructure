#include<iostream>
#include<queue>

using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
//  min heap

     priority_queue<int ,vector<int>,greater<int>  > mini;

     maxi.push(1);
     maxi.push(2);
     maxi.push(3);
     maxi.push(4);

    cout<<maxi.size()<<endl;
    int n= maxi.size();
     for(int i=0;i<maxi.size();i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
     }cout<<endl;

     mini.push(1);
     mini.push(2);
     mini.push(3);
     mini.push(4);

    cout<<mini.size()<<endl;
    int m = mini.size();
     for(int i=0;i<mini.size();i++){
        cout<<mini.top()<<endl;
        mini.pop();
     }cout<<endl;
    
}