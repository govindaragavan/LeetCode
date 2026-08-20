class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        long long a[n],b[n];
        a[0]=nums[0];
        b[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        a[i]=(nums[i]*a[i-1]);
        
        for(int i=nums.size()-2;i>=0;i--)
        b[i]=(nums[i]*b[i+1]);
        
            for(int i=0;i<n;i++){
            if(i==0)
            res.push_back(b[1]);
            else if(i==nums.size()-1)
            res.push_back(a[n-2]);
            else
            res.push_back(a[i-1]*b[i+1]);
        }
        return res;
    }
};