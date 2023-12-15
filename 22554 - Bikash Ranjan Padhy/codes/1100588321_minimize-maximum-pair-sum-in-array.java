class Solution {
    public int minPairSum(int[] nums) 
    {
        int n= nums.length;
        if(n == 2) return nums[0]+ nums[1];
        Arrays.sort(nums);

        int maxp= 0;
        for(int i=0; i< n/2; i++)
            maxp = Math.max(maxp, nums[i]+ nums[n-1-i]);
        
        return maxp;
    }
}