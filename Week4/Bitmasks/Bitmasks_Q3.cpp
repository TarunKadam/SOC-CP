class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> powerSet;
        int n=nums.size();
        for(int num=0;num<(1<<n);num++){
            vector<int> element;
            for(int i=0;i<n;i++){
                if(num & (1<<i)){
                    element.push_back(nums[i]);
                }
                
            }
            powerSet.push_back(element);
        }
        return powerSet;
    }   

};