class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       
           for(int i=0;i<arr.size();){
            if(arr[i]==0){
                arr.insert(arr.begin()+i+1,0);
                arr.erase(arr.end());
                i=i+1;
            }
            i++;
           }
    }
};