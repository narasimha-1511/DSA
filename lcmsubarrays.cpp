#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {

        int ans = 0;
        //lcm is increasing function

        for(int i=0; i<nums.size();i++){
            int lc = nums[i];
            if(lc==k)ans++;
            if(lc>k)continue;

            for(int j=i+1; j<nums.size();j++){
                lc = lcm(lc , nums[j]);
                if(lc==k)ans++;
                if(lc>k)break; 
            }
        }

        return ans;

    }

    int gcd(int a , int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }

    int lcm(int a , int b){
        return (a/gcd(a,b))*b;
    }
};