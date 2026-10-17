class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(!helper(source,target)) return -1;
    if(abs(source[0]-target[0])==abs(source[1]-target[1])) return 1;                       
        return 2;
    }
    private:
    bool helper(vector<int>src,vector<int> target){
        int bis=(src[0]+src[1])%2==0 ? 1 : 0;
        int tar=(target[0]+target[1])%2==0 ? 1 : 0;
        return bis==tar;
    }
};