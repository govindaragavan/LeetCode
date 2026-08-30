class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> map;
        for(int x : nums)
        map[x]++;

        for(auto it= map.rbegin();it!=map.rend();it++){
           cout<<it->first<<"->"<<it->second<<" ";
           k-=it->second;
           if(k<=0) return it->first;}
        return 0;
    }
};