class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums, int index = 0, vector<int> subset = {}) {
        if (index == nums.size()) {
            return {subset};  // base case: return a vector of one subset
        }

        // Option 1: exclude nums[index]
        vector<vector<int>> exclude = subsets(nums, index + 1, subset);

        // Option 2: include nums[index]
        subset.push_back(nums[index]);
        vector<vector<int>> include = subsets(nums, index + 1, subset);

        // Combine both results
        exclude.insert(exclude.end(), include.begin(), include.end());
        return exclude;
    }          
};