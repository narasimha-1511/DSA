#include <bits/stdc++.h>
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        #define int long long
        // int n = rectangles.size();

        // vector<vector<int>> ratios(n , vector<int>(2);

        // for(int i =0 ; i<n; i++){
        //     for(int j =0; j<2; j++){
        //         int
        //         ratios[i][0]
        //     }
        // }

        map<pair<int,int> , int> mp;
        int ans = 0;
        
        for(auto rectangle: rectangles){
            int num = rectangle[0];
            int den = rectangle[1];

            int gc = gcd(num , den);

            num /= gc;
            den /= gc;

            ans+= mp[{num , den}];

            mp[{num , den}]++;
        }

        return ans;

        #undef int
    }

    int gcd( int a , int b){
        if(b==0)return a;
        return gcd(b , a%b);
    }
};