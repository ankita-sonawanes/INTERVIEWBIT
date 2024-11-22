vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret;
    int n = A.size();

    // Adjust B if it's larger than the size of the array
    B = B % n;

    // Append the rotated array to the result
    for (int i = 0; i < n; i++) {
        ret.push_back(A[(i + B) % n]);
    }

    return ret;
}
