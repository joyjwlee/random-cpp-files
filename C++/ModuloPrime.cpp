#include <bits/stdc++.h>
using namespace std;
    int main() {
    int n;
    int status = 1;
    int num = 3;

    cin >> n;
    int listOfPrimes[n];

    if (n >= 1) {
        listOfPrimes[0] = 0;
        listOfPrimes[1] = 2;
    }

    for (int i = 2; i <= n;) {
        for (int j = 2; j <= sqrt(num); j++) {
            if (num%j == 0) {
                status = 0;
                break;
            }
        }
        if (status != 0) {
            listOfPrimes[i] = num;
            i++;
        }
        status = 1;
        num++;
    }

    //nth element in array is the nth prime
    for (int i = 0; i < n; i++){
        cout << listOfPrimes[i] << " ";
    }


}
