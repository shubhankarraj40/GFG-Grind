//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN; // Initialize largest to the smallest integer value
        int secondLargest = INT_MIN; // Initialize second largest to the smallest integer value

        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];

            if (num > largest) { // Update largest and shift previous largest to secondLargest
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num < largest) { // Update secondLargest if in valid range
                secondLargest = num;
            }
        }

        return secondLargest == INT_MIN ? -1 : secondLargest; // Return -1 if no valid second largest
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends