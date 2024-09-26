#include <iostream>
#include <bits/stdc++.h>
// Function to calculate XOR for each query
vector<int> xorQueries(const vector<int>& arr, const vector<vector<int>>& queries) {
    int n = arr.size();
    
    // Step 1: Create prefix XOR array
    vector<int> prefixXOR(n);
    prefixXOR[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefixXOR[i] = prefixXOR[i - 1] ^ arr[i];
    }
    
    // Step 2: Process queries
    vector<int> result;
    for (const auto& q : queries) {
        int L = q[0];
        int R = q[1];
        
        // If L == 0, return prefixXOR[R], otherwise XOR of prefixXOR[R] and prefixXOR[L-1]
        if (L == 0) {
            result.push_back(prefixXOR[R]);
        } else {
            result.push_back(prefixXOR[R] ^ prefixXOR[L - 1]);
        }
    }
    
    return result;
}

int main() {
    // Input array
    vector<int> arr = {1, 3, 4, 8};
    
    // Queries
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
    
    // Get the result
    vector<int> result = xorQueries(arr, queries);
    
    // Print the results
    for (int r : result) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}