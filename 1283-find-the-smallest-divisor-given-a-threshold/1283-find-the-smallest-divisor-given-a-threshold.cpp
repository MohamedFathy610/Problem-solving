class Solution {
    int divisor(vector<int>& nums,int n)
    {
        int sum =0;
        for (int i=0;i<nums.size();i++)
        {
            sum += (nums[i]/n);
            if (nums[i]%n >0)
            sum++;
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort (nums.begin(),nums.end());
        int s=1,e=nums[nums.size()-1];
        while (s<=e)
        {
            int mid = (s+e)/2;
            if (divisor (nums,mid)<=threshold)
            e = mid -1;
            else 
            s = mid +1;
        }
        return e+1;
    }
};