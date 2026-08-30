class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mp;
        vector<int> ans;
        int n = numbers.size();
        int sum=0;
        for(int i=0;i<n;i++){
                mp[numbers[i]]=i+1;
            if(mp.find(target-numbers[i])!=mp.end() && target!=2*numbers[i]){
                ans.push_back(mp[target-numbers[i]]);
                ans.push_back(mp[numbers[i]]);
                return ans;
        }

    }
    for(auto it=mp.begin();it!=mp.end();++it)
    cout<<it->first<<" ";
    return ans;}
};