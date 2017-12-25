class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index_sumpair;

        // O(n^2)
        for (int i = 0; i < nums.size(); i++){
            int part_sum = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (part_sum == nums[j])
                {
                    index_sumpair.push_back(i);
                    index_sumpair.push_back(j);
                    return index_sumpair;
                }
            }
        }
        
        // O(n)
      /*unordered_map<int, int> hash;
       for (int i = 0; i < nums.size(); i++) {
        int part_sum = target - nums[i];
        
        if (hash.find(rem) != has.end()) {
            index_sumpair.push_back(hash[rem] + 1);
            index_sumpair.push_back(i + 1);
            return index_sumpair;
        }
        hash[nums[i]] = i;
    } */
          
        return index_sumpair;
    }
};
