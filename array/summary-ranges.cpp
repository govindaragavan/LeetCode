class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        
        if(n == 0)
            return {};

        int currmin = nums[0], currmax = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i]!=nums[i-1]+1){
                
                if(currmin == currmax)
                    ans.push_back(to_string(currmin));
                else
                    ans.push_back(to_string(currmin) + "->" + to_string(currmax));

                currmin = nums[i];
                currmax = nums[i];
            }
            else{
                currmax = nums[i];
            }
        }

        // push the last range
        if(currmin == currmax)
            ans.push_back(to_string(currmin));
        else
            ans.push_back(to_string(currmin) + "->" + to_string(currmax));

        return ans;
    }
};