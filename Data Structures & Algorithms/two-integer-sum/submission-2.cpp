class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j=0;
        while(j<nums.size()){
            for(int i=j+1;i<nums.size()&&(i!=j);i++){
                if(nums[i]+nums[j]==target){
                    return {j,i};
                }
            } 
            j++; 
        }
        return {};
    }
};
