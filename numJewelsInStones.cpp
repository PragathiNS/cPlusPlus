class Solution {
public:
    int numJewelsInStones_n2(string J, string S) {
        int count;
        
        count = 0;
        for (int i = 0; i < J.length(); i++)
        {
            for (int j = 0; j < S.length(); j++)
            {
                if (J[i] == S[j])
                    count++;
            }
        }
        return (count);
    }
    
    int numJewelsInStones_2n(string J, string S) {
        int count;
        unordered_set<char> jewels;
        
        count = 0;
        for (int i = 0; i < J.length(); i++)
        {
            jewels.insert(J[i]);
        }
            
        for (int j = 0; j < S.length(); j++)
        {
            if (jewels.find(S[j]) != jewels.end())
                count++;
        }
        return (count);
    }
};
