#include <bits/stdc++.h>

using namespace std;

int subarrayGCD(vector<int>& nums, int k) {

    int ans = 0;
    //gcd is a decreasing function
    
    for(int i=0; i<nums.size(); i++){
    
    int gc = nums[i];
    if(gc == k)ans++;
    
    for(int j=i+1; j<nums.size();j++){
        gc = gcd(gc, nums[j]);
        if(gc==k)ans++;
        if(gc<k)break;
    }

    } 
    return ans;

}


int main(){
    vector<int> nums = {6,9,7};
    int k = 3;
    cout << subarrayGCD(nums, k) << endl;
    return 0;
}

int gcd( int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
