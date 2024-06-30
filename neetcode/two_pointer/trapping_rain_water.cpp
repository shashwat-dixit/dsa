// https://leetcode.com/problems/trapping-rain-water/solutions/17357/sharing-my-simple-c-code-o-n-time-o-1-space/


#include <bits/stdc++.h>

/*
    Time Complexity - O(n)
    Space Complexity - O(1)
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = height[left], rightMax = height[right];
        int res = 0;

        while (left < right) {
            if (leftMax < rightMax) 
            {
                left++;
                leftMax = max(leftMax, height[left]);
                res += leftMax - height[left];
            }   else {
                right--;
                rightMax = max(rightMax, height[right]);
                res += rightMax - height[right];
            }


        } 

        return res;
    }
};