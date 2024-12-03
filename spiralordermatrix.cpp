vector<int> Solution::spiralOrder(const vector<vector<int>> &A) {
    vector<int> result;

    // Check if the input matrix is empty
    if (A.empty()) return result;

    int m = A.size();       // Number of rows
    int n = A[0].size();    // Number of columns

    int top = 0, bottom = m - 1; // Top and bottom row boundaries
    int left = 0, right = n - 1; // Left and right column boundaries

    // Traverse the matrix in spiral order
    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int j = left; j <= right; j++) {
            result.push_back(A[top][j]);
        }
        top++; // Move the top boundary down

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++) {
            result.push_back(A[i][right]);
        }
        right--; // Move the right boundary left

        // Traverse from right to left along the bottom row (if still valid)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                result.push_back(A[bottom][j]);
            }
            bottom--; // Move the bottom boundary up
        }

        // Traverse from bottom to top along the left column (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(A[i][left]);
            }
            left++; // Move the left boundary right
        }
    }

    return result;
}
