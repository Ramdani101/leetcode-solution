int searchInsert(vector<int>& nums, int target) {
        int result = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                result = i;
                return result;
            }
            
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > target)
            {
                result = i;
                return result;
            }
            
        }
        
        return nums.size();

    }