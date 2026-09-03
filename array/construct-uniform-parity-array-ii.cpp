class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int Min=*min_element(nums1.begin(),nums1.end());
       if(Min%2==1) return 1;

       for(int x : nums1) if(x%2==1) return false;
       return true; 
    }
};
