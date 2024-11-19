#include <bits/stdc++.h>
using namespace std;
vector<int> v1={0},v2={0};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,k,a,b;
    cin>>n>>m>>k;
    
    for(int i=0; i<n; i++){
        cin>>a;
        v1.push_back(v1[i]+a+k);
        v2.push_back(v2[i]+a);
    }
    for(int i=0; i<m; i++){
        cin>>a>>b;
        auto upp=upper_bound(v1.begin(),v1.end(),b+v1[a]);
        upp-- ;
        cout<<v2[(upp-v1.begin())]-v2[a] << endl;
    }
}