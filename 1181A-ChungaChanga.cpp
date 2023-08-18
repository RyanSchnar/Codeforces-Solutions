#include <bits/stdc++.h>
 
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define PUB push_back
#define POB pop_back
#define vi vector<int>
#define mi map<int, int>
#define ll long long
 

int main(void)
{
    ll x,y,z;
    cin>>x>>y>>z;

    ll total_coco = (x + y) / z;
    cout << total_coco << " ";
    ll actual = x / z + y / z;

    if(total_coco > actual) 
    {
        cout << 1LL * (z - max((x % z), (y % z)));
    }
    else 
    {
        cout << 0;
    }
 
    return 0;
}
