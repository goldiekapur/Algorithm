class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target) {
        int n = A.size();
        if (n == 0) return 0;
        
        int start = 0, end = n - 1;
        while(start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (A[mid] < target) {
                start = mid;
            } else if (A[mid] > target) {
                end = mid;
            } else {
                return mid;
            }
        }
        
        if (A[start] >= target) return start;
        if (A[end] >= target) return end;
        return end + 1;
    }
};