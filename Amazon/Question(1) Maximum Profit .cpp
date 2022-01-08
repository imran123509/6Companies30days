
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProfit(int k, int n, int A[]) {
        int dp[k+1][n+1];
        memset(dp,0, sizeof dp);
        for(int i=1; i<=k; i++){
            int maximum=INT_MIN;
            for(int j=1; j<n; j++){
                maximum=max(maximum, dp[i-1][j-1]-A[j-1]);
                dp[i][j]=max(dp[i][j-1], maximum+A[j]);
            }
        }
        return dp[k][n-1];
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}

//https://practice.geeksforgeeks.org/problems/maximum-profit4657/1#