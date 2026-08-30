class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        mp[0]=1;
        vector<int> ans;
        int n = numbers.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=numbers[i];

            if(mp.find(target-sum)!=mp.end()){
                ans.push_back(mp[target-sum]);
                ans.push_back(mp[sum]);
                return ans;
        }
        mp[sum]=i+1;
    }
    for(auto it=mp.begin();it!=mp.end();++it)
    cout<<it->first<<" ";
    return ans;}
};