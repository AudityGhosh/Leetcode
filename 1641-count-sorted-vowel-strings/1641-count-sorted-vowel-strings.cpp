class Solution {
public:
    //if we closely observe the corresponding values of the count with respect to n, we will find that it is a series of pentatope numbers, details from GFG https://www.geeksforgeeks.org/pentatope-number/
    int countVowelStrings(int n) {
        n++;
        return n * (n + 1) * (n + 2) * (n + 3) / 24;
    }
};