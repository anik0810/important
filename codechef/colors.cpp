#include <bits/stdc++.h>
#define ll long long int
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
using namespace std;
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
int comb(int n, int k)
{
    return fact(n) / fact(k) * fact(n - k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        vector<int> v;
        fori(0, 3)
        {
            cin >> x;
            v.push_back(x);
        }
        int n = 0;
        fori(0, 3)
        {
            if (v[i] != 0)
            {
                n++;
                v[i]--;
            }
        }
        fori(0, 3)
        {
            forj(i + 1, 3)
            {
                if (v[i] < v[j])
                {
                    int temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
                if (v[0] >= 2)
                {
                    cout << n + 3 << endl;
                    break;
                }
                if (v[0] == 1)
                {
                    cout << (v[2] >= 2 ? n + 2 : n + 1) << endl;
                    break;
                }
            }
        }
        cout<<(v[1]==0?n:n+1)<<endl;
    }
}