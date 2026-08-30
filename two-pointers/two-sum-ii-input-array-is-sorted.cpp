class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mp;
        vector<int> ans;
        int n = numbers.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(mp.find(target-numbers[i])!=mp.end()){
                ans.push_back(mp[target-numbers[i]]);
                ans.push_back(i+1);
                return ans;
        }
                        mp[numbers[i]]=i+1;
    }
    for(auto it=mp.begin();it!=mp.end();++it)
    cout<<it->first<<" ";
    return ans;}
};