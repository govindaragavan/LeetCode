class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> lesser;
        vector<int> equal;
        vector<int> greater;

        for(int i=0;i<nums.size();i++){
         if(nums[i]<pivot) lesser.push_back(nums[i]);
         else if(nums[i]==pivot) equal.push_back(nums[i]);
         else greater.push_back(nums[i]);
        }
        lesser.insert(lesser.end(),equal.begin(),equal.end());
        lesser.insert(lesser.end(),greater.begin(),greater.end());
        return lesser;
    }
};