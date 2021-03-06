class Solution {
public:
    /*
     * @param A: Given an integer array
     * @return: nothing
     */
    void heapify(vector<int> &A) {
        int n = A.size();
        for (int i = (n - 2) / 2; i >= 0; --i)
            min_heapify(A, i, n);
    }
    
private:
   // it the same as shiftDown()
    void min_heapify(vector<int> &A, int i, int len) {
        while(2 * i + 1 < len) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int smallest = i;
            if (left < len && A[left] < A[i]) smallest = left;
            if (right < len && A[right] < A[smallest]) smallest = right;
        
            if (smallest != i) {
                swap(A[i], A[smallest]);
                i = smallest;
            } else {
                break;
            }
        }
    }


};