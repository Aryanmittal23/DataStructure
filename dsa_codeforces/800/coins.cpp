/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
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
        long long int n , k; 
        cin >> n >> k;
      if(k%2==1){
        cout<<"YES"<<endl;
      }else{
        if(k%2==0 && n%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
      }
    } 
    return 0; 
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x;
        cin>>s;
        int count=0;
        while(count<=5){
            if(x.find(s)!=std::string::npos){
                break;
            }
            count++;
            x+=x;
        }
        if(count>5)cout<<-1<<endl;
        else cout<<count<<endl;
    }
    return 0;
}