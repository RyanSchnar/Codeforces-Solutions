#include <bits/stdc++.h>

using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define PUB push_back
#define POB pop_back
#define vi vector<int>
#define mi map<int, int>

typedef long long ll;

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
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = i; j <= n; j *= 2)
            {
                a.PUB(j);
            }
        }

        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
