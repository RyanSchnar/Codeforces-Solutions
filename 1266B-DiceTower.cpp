#include <bits/stdc++.h>

using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define PUB push_back
#define POB pop_back
#define vi vector<int>
#define mi map<int, int>

typedef unsigned long long ll;

void init_code()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
}

int main(void)
{
    FAST
    init_code();
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        ll calc = x % 14;
        if (calc >= 1 && calc <= 6 && x > 14)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
