class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int j=0;
        while(j<nums.size()){
            for(int i=1;i<nums.size()&&(i!=j);i++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
            j++;
        }
        return false;
    }
};