class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1,set2;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
              set1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
              set2.insert(nums2[i]);
        }
        for(int x : set1){
       if(set2.find(x)!=set2.end())
       res.push_back(x);
       }
        return res;
    }
};