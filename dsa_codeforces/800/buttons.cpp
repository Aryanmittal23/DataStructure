

#include "iostream" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 

#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back 
#define mp make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        int arr[3];
        for(int i = 0 ;i<3 ; i++){
           cin>>arr[i];
        }
        

        if(arr[2]%2 == 0){
           if(arr[0]==arr[1]){
            cout<<"Second"<<endl;
           }else if(arr[0]>arr[1]){
            cout<<"First"<<endl;
           }else{
            cout<<"Second"<<endl;
           }
        }else {
           if(arr[0]==arr[1]){
            cout<<"First"<<endl;
           }
           else if(arr[0]>arr[1]){
            cout<<"First"<<endl;
           }
           else{
            cout<<"Second"<<endl;
           }
        }

    } 
    return 0; 
} 
