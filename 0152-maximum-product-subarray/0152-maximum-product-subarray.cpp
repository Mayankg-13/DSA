class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            int product=1;
            for(int j=i;j<n;j++){
                product *= nums[j];
                maxproduct=max(maxproduct,product);
                
            }
        }
        return maxproduct;
    }
};