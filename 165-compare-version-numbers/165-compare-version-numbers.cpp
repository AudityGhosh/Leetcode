class Solution {
public:
   
    int compareVersion(string version1, string version2) {
       int n = version1.size(), m = version2.size(), i = 0, j = 0, n1 = 0, n2 = 0;
        while(i< n || j < m){
            while(i < n && version1[i] != '.'){
                n1= n1*10 + version1[i] - '0';
                i++;
            }
            while(j < m && version2[j] != '.'){
                n2 = n2*10 + version2[j] - '0';
                j++;
            }
            if(n1 < n2) return -1;
            if(n2 < n1) return 1;
            i++;
            j++;
            n1 = 0;
            n2 = 0;
        }
        return 0;
        
        
        
        
        
    }
};