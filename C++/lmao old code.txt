#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N, Budget, satisfiedCows = 0;
    cin >> N >> Budget;

    long long priceOfChocolate[N], numberOfCows[N];
    pair PriceAndCows[N];

    for(long long i = 0; i < N; i++){
        cin >> priceOfChocolate[i];
        cin >> numberOfCows[i];
    } //Now that we have N bring in the two values

    for (long long i = 0; i < N; i++){
        PriceAndCows[N].first = priceOfChocolate[i];
        PriceAndCows[N].second = numberOfCows[i];
    } //Create a vector/array of pairs to store price and #of cows

    long long buyEverything;
    for (long long i = 0; i < N; i++){
        buyEverything += PriceAndCows[i].first * PriceAndCows[i].second;
    } // get price if you buy everything

    if(buyEverything > Budget){ // if buying everything is over budget, see how far you can go while being under
        sort(PriceAndCows.begin(), PriceAndCows.end()); // sort by price, least to greatest
        long long totalSpent = 0;
        long long index = 0;
        while(totalSpent <= Budget){
            for(long long i = 0; i < PriceAndCows[index].second; i++){
                if(totalSpent <= Budget){
                    totalSpent += PriceAndCows[index].first;
                    satisfiedCows++;
                }
            }
            index++;
        }
        satisfiedCows--;
        cout << satisfiedCows;
    }

    if(buyEverything <= Budget){ // if buying everything is under, buy everything.
        for (long long i = 0; i < N; i++){
            satisfiedCows += PriceAndCows[i].second; // then you get all of the cows.
        }
        cout << satisfiedCows;
    }
}
