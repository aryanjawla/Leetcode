class Solution {
    //reverse function
/*private:
    int revesreArray(vector<int>& nums,  int left, int right){
        while(left<=right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        
    }*/
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() +k);
        reverse(nums.begin() + k, nums.end());

        
    }
};