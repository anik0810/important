#include <iostream>
#include <vector>
#define ll long long int
#define vi vector<int> v
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        vi;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-1;j++){
                if(gcd(v[i],v[j])==lcm(v[i],v[j])){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
