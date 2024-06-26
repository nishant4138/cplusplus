#include<bits/stdc++.h>

using namespace std;



    int solve(int i, int n, vector<int>& dp) {
        if (i == n) return 1;
        if (i > n) return 0;

        if (dp[i] != -1) return dp[i];

        dp[i] = solve(i + 1, n, dp) + solve(i + 2, n, dp);

        return dp[i];
    }

    int climb(int n) {
        vector<int> dp(n + 1, -1);
        return solve(0, n, dp);
    }
    
    int main(){
        int n=5;
        cout<<climb(n);
        return 0;
    }