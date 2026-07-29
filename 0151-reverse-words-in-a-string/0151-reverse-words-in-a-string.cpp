class Solution {
public:
    string reverseWords(string s) {
       int l =s.length();
       int i=0;
       int j=l-1;
       while(i<j)
       {
    swap(s[i],s[j]);
    i++;
    j--;
       }

       int k=0;
       int m=0;
       int n=0;
       while(k<l)
       {
        while
        
            (k<l && s[k]!=' ')
            {
        s[m]=s[k];
        m++;
        k++;
       }
       if(n<m)
       {
        reverse(s.begin()+n,s.begin()+m);
        s[m]=' ';
        m++;
        n=m;



       }
       k++;
       }
        s=s.substr(0,m-1) ; 
        return s;
    }
};