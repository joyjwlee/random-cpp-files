#include <bits/stdc++.h>

using namespace std;

int N;

int main(void) {
    cin >> N;

    for (int i = 0; i < (1<<N); i++) {
        for (int j = 0; j < N; j++) {
            if (i & (1<<j))
                cout << j;
        }
        cout << endl;
    }
}
