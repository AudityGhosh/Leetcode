class Solution {
public:
    int addDigits(int num) {
        if(to_string(num).size()==1)
            return num;
        string s = to_string(num);
        int sum=0;
        for(int i=0;i<s.size();i++)
            sum+=(s[i]-'0');
        
        return addDigits(sum);
    }
};