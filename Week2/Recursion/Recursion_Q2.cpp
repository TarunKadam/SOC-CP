class Solution {
public:
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permute(nums,result,0);
        return result;
    }
    vector<vector<int>> permute(vector<int>& nums,vector<vector<int>>& result, int index) {
        if(index==nums.size()){
            result.push_back(nums);
            return result;
        }

        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            permute(nums,result,index+1);
            swap(nums[index],nums[i]);
        }
            
        return result;
    }
};