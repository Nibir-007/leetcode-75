class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int l=t.length();
        for(int j=0;j<l;j++)
        {
            if(s[i]==t[j])
            {
                s[i]=t[j];

            
            i++;
            }
        }

        if(i==s.length())
        {
            return true;
        }
        else
        { return false;
        }
    }
};