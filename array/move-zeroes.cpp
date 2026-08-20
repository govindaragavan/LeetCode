class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
       for(int num : nums){
        if(num!=0){
            nums[j]=num;
            j++;
        }
       
       }
       for(int i=nums.size()-1;i>=j;i--){
                  nums[i]=0;
       }
    }
};