class Solution {
public:
    bool check (vector<int>& position, int m,int force)
    {
        int numballs =1;
        int lastball = position[0];
        for (int i=1;i<position.size();i++)
        {
            if (position[i]- lastball >= force)
            {
                numballs++;
                lastball = position[i];
            }
        }
        return numballs>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort (position.begin(),position.end());

        int start =0 ,end = 1e9;
        int ans ;
       
        while (start <= end )
        {
            int mid = (start + end )/2;
            if ( check(position,m,mid) )
            {
                ans =mid;
                start = mid +1;   
            }
            else 
            end = mid -1;
            
        }
        return ans;
        
    }
};