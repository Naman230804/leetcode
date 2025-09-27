class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int num : nums1){
            int idx = -1;
            for(int i=0;i<nums2.size();i++){
                if(nums2[i] == num){
                    idx = i;
                    break;
                }
            }
            int nextGreater = -1;
            for(int j = idx; j < nums2.size(); j++){
                if(nums2[j] > num){
                    nextGreater = nums2[j];
                    break;
                }
            }
            res.push_back(nextGreater);
        }
        return res;
    }
    
};