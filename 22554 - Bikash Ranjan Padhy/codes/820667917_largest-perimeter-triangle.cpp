class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        //check if a triangle can be formed using the 3 lengths
        //A triangle is valid if sum of its two sides is greater than the third sideclass Solution {
    // public int largestPerimeter(int[] A) {
        sort(A.begin(),A.end());
        for (int i = A.size() - 3; i >= 0; --i)
            if (A[i] + A[i+1] > A[i+2])
                return A[i] + A[i+1] + A[i+2];
        return 0;
    }
};