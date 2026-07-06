class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> prevMaps;
        for(int i;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(prevMaps.find(diff)!=prevMaps.end())
            {
                return{
                    prevMaps[diff],i
                };
            }
            prevMaps.insert({nums[i],i});
        }
        return{};
    }
};