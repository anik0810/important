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
        int a;
        cin>>a;
        int left=abs(a-1);
        int right=abs(100-a);
        cout<<(left<right?"left":"right")<<endl;
    }
    return 0;
}