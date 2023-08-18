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

    int n, k, x;
    cin >> n >> k;

    map<int, int> freq;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        ++freq[x];
    } 

    int pair = 0; 
    int non_pair = 0;

    for (auto i : freq)
    {
        pair += (i.second / 2) * 2;
        non_pair += i.second % 2;
    }

    int res = pair + (int)ceil(non_pair / 2.0);
    cout << res << endl;

    return 0;
}
