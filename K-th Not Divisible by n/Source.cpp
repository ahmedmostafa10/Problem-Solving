#include <iostream>
using namespace std;
#define ll long long
void solve()
{
    ll TC; cin >> TC;
    while (TC--)
    {
        ll x, n; cin >> x >> n;
        ll l = 0, r = 1e18, mid, ans = -1;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (mid - mid / x == n)
            {
                if (mid % x != 0)
                {
                    ans = mid;
                    break;
                }
                else
                {
                    ans = mid - 1;
                    break;
                }

            }
            else if (mid - mid / x < n)
            {
                l = mid + 1;
            }
            else if (mid - mid / x > n)
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

}
int main() {
    solve();
    return 0;
}