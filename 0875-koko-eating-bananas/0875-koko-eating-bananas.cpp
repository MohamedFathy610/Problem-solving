class Solution {
public:
    bool check (vector<int>& piles, int h,int k){
        long long sum =0;
        for (int i=0;i<piles.size();i++)
        {
            sum += (piles[i]/k);
            if (piles[i]%k >0)
            sum ++;
        }
        return sum <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s =1,e =1e9;
        while (s<=e)
        {
            int mid = (s+e)/2;
            if (check(piles,h,mid))
            e = mid-1;
            else 
            s = mid +1;
        }
        return e+1;
    }
};