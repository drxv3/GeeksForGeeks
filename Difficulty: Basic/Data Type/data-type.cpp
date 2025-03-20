//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends

// User function Template for C++

class Solution {
public:
    int dataTypeSize(string type) {
        if (type == "Character") return sizeof(char);
        if (type == "Integer") return sizeof(int);
        if (type == "Long") return sizeof(long);
        if (type == "Float") return sizeof(float);
        if (type == "Double") return sizeof(double);
        return -1;  // Invalid type
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends