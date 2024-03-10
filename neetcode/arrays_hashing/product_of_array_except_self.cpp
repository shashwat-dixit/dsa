#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> output(nums.size(), 1);
        
        int prefix = 1;
        for (int i = 0; i < output.size(); i++) {
            output[i] = prefix;
            prefix *= nums[i]; 
        }

        int postfix = 1;
        for (int i = output.size() - 1; i >= 0; i--) {
            output[i] *= postfix; 
            postfix *= nums[i]; 
        }

        return output;
    }
};
