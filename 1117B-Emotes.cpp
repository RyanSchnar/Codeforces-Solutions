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
    ll n, m, k;
    cin >> n >> m >> k;

    ll arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    ll max_happiness = (m * arr[n - 1]) - ((m / (k + 1)) * (arr[n - 1] - arr[n - 2]));  
    cout << max_happiness << endl;

    return 0;
}
