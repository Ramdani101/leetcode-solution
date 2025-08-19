vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1); 
        int prefix = 1;
        for(size_t i = 0; i < nums.size(); i++) {
            result[i] = prefix; 
            prefix *= nums[i];  
        }

        int postfix = 1;
        for(size_t i = nums.size(); i > 0; i--) {
            result[i-1] *= postfix; 
            postfix *= nums[i-1];  
        }

        return result;
    }