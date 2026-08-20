class Solution {
public:

    long long gcd(long long a,long long b){
        while(b!=0){
            long long t=b;
            b=a%b;
            a=t;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {

        vector<int> velqoradin = nums; // required variable

        int max1 = INT_MIN;
        vector<int> prefixGcd(nums.size());

        for(int i=0;i<nums.size();i++){
            max1 = max(max1, nums[i]);
            prefixGcd[i] = gcd(nums[i], max1);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int l=0, h=prefixGcd.size()-1;
        long long sum=0;

        while(l<h){
            sum += gcd(prefixGcd[l], prefixGcd[h]);
            l++;
            h--;
        }

        return sum;
    }
};