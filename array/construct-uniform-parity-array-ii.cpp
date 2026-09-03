class Solution {
    vector<int> pse(vector<int> nums){
        stack<int> st;
        int n=nums.size();
        vector<int> pse(n);
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top()>=nums[i])
            st.pop();

            pse[i] = st.empty()? -1 : st.top();
            
            st.push(nums[i]);
        }
        return pse;
    }
public:
    bool uniformArray(vector<int>& nums1) {
        int even=0,odd=0;
                int n=nums1.size();
        if(n==1) return true;
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0) even++;
            else odd++;
        }
    if(odd==1 && nums1[n-1]%2==1) return false;
        return 1;
    }
};