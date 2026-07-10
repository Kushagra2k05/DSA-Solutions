class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
       unordered_map<int,int>freq;
       for(int x: nums){
        freq[x]++;
        if(freq[x]>1){
            res.push_back(x);
        }
       }
       return res; 
    }
};