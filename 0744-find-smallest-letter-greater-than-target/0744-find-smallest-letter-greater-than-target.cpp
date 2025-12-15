class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start =0 ,end = letters.size()-1;

        char c = letters[end];
        while (start <= end )
        {
            int mid = (start + end )/2;
            if (letters [mid ] > target )
            {
                if (letters [mid ]< c)
                c = letters [mid ];
                end = mid -1;
            }
            else 
            start= mid +1;
        }
        if (c > target )
        return c;
        else return letters[0];
    }
};