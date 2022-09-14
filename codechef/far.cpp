#include <bits/stdc++.h>
#define ll long long int
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int>v;
        int x;
        fori(0,a){
            cin>>x;
            v.push_back(x);
        }
        int ans=0;
        fori(0,a){
            ans+=max(abs(v[i]-1),abs(v[i]-b));
        }
        cout<<ans<<endl;
    }
    return 0;
}