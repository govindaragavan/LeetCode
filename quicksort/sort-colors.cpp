class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums)
        mp[x]++;

           nums.clear();
            while(mp[0]>0){
            nums.push_back(0);mp[0]--;}
            while(mp[1]>0)
            {nums.push_back(1);mp[1]--;}
            while(mp[2]>0)
            {nums.push_back(2);mp[2]--;}
   }
};