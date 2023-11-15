
#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int *enemy, int resistance, int n, int initialStrength) {
    for (int i = 0; i < n; i++) {
        if (enemy[i] > resistance) {
            if (initialStrength <= enemy[i]) 
                return false;
             else 
                initialStrength -= enemy[i];
        }
    }
    return true;
}

int minResistance(int *a, int n, int initialStrength) {
    int Max=0;
    for(int i =0; i < n;i++)
        Max=max(Max,a[i]);
    int low = 0, high = Max;
    int result; 

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(a, mid, n, initialStrength)) {
            result = mid;
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = minResistance(a, n, h);
        cout << ans << endl;
    }
    return 0;
}
