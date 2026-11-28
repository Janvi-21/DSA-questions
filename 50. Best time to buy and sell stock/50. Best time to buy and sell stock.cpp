#include <bits/stdc++.h>
using namespace std;

int profit(vector<int>& prices){
    int mini = prices[0];
    int profit = 0;

    for(int i = 0; i < prices.size(); i++){
        int cost = prices[i] - mini;
        profit = max ( cost, profit);
        mini = min(mini, prices[i]);
    }

    return profit;

}

int main() {
    vector<int> shares = {7,1,2,3,4,6,3};

    cout << profit(shares);
    return 0;
}