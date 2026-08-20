class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
        int lsum=0,rsum=0,j=0;
        while(j<i){
        lsum+=nums[j];
        j++;
        }
        j++;
        while(j<nums.size() && j>i){
        rsum+=nums[j];
        j++;}

        if(lsum==rsum)
        return i;
       } 
       return -1;
    }
};