class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int hLeft = height[left];
        int hRight = height[right];
        int width = right - left;
        int minHeight = std::min(hLeft, hRight);

        maxWater = std::max(maxWater, width * minHeight);

        // Move the pointer pointing to the shorter line towards the center.
        if (hLeft < hRight) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater; 
    }
};