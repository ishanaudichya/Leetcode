
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int unique=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[unique]){
                unique++;
                nums[unique]=nums[j];
            }
        }
        return unique+1;
        }
};