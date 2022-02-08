class Solution {
public:
    int addDigits(int num) {
        //Without Recursion or loops, try writing testcases with pen and paper
       if(num==0) return 0;
        if(num%9==0) return 9;
        else return num%9;
        /**A    U   D   I   T   Y       G   H   O   S   H**/
    }
};