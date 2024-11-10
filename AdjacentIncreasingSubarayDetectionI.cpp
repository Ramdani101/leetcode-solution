bool hasIncreasingSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    for (int i = 0; i <= n - 2 * k; ++i) {
        bool firstSubarrayIncreasing = true;
        for (int j = i; j < i + k - 1; ++j) {
            if (nums[j] >= nums[j + 1]) {
                firstSubarrayIncreasing = false;
                break;
            }
        }

        if (firstSubarrayIncreasing) {
            bool secondSubarrayIncreasing = true;
            for (int j = i + k; j < i + 2 * k - 1; ++j) {
                if (nums[j] >= nums[j + 1]) {
                    secondSubarrayIncreasing = false;
                    break;
                }
            }
            
            if (secondSubarrayIncreasing) {
                return true;
            }
        }
    }
    
    return false;
    }