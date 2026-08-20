class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> a;
        for(int x : nums)
        a.insert(x);

        for(int i=1;i<=nums.size()+1;i++){
               if(a.find(i)==a.end())
               return i;
        }
        return 0;
    }
};