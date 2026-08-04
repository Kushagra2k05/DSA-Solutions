class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int j = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            while (j < nums[i]) {
                ans.push_back(j);
                j++;
            }

            if (j == nums[i])
                j++;
        }

        return ans;
    }
};