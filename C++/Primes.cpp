#include <bits/stdc++.h>
using namespace std;
    int main() {
    int n;
    int status = 1;
    int num = 3;

    cin >> n;
    if (n >= 1) {
        cout << 2 << " ";
    }

    for (int i = 2; i <= n;) {
        for (int j = 2; j <= sqrt(num); j++) {
            if (num%j == 0) {
                status = 0;
                break;
            }
        }
        if (status != 0) {
            cout << num << " ";
            i++;
        }
        status = 1;
        num++;
    }
}
