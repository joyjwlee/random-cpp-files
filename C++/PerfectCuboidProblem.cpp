#include <bits/stdc++.h>
#define ULL unsigned long long

using namespace std;

ULL N;

bool is_p_square(ULL n) {
    ULL root(round(sqrt(n)));
    return n == root * root;
}

int main(void) {
    for (ULL a = 1; a <= 10000; a++) {
        for (ULL b = a; b <= 10000; b++) {
            for (ULL c = b; c <= 10000; c++) {
                ULL A = a*a; ULL B = b*b; ULL C = c*c;
                ULL d = A + B;
                ULL e = A + C;
                ULL f = B + C;
                if (is_p_square(d) && is_p_square(e) && is_p_square(f)) {
                    cout << a << " " << b << " " << c << endl;
                    ULL g = A + B + C;
                    if (is_p_square(g)) cout << "YES";
                }
            }
        }
    }
    /// LLONG_MAX*2+1;
    cout << "done";
    return 0;
}
