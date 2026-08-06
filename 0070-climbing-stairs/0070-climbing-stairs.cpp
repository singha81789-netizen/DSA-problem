class Solution {
public:
    int climbStairs(int n) {

        vector<int> dp(n + 1);

        dp[0] = 1;
        dp[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            int left = dp[i - 1];

            int right = dp[i - 2];

            dp[i] = left + right;
        }

        return dp[n];
    }
};

// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n <= 2) return n;

//         int a = 1, b = 2;

//         for (int i = 3; i <= n; i++) {
//             int c = a + b;
//             a = b;
//             b = c;
//         }

//         return b;
//     }
// };