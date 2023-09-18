class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; // Add one to the last digit
                return digits; // No carry, return the result
            } else {
                digits[i] = 0; // Set the last digit to 0
            }
        }
        
        // If we reach here, it means there's a carry to be propagated
        digits.insert(digits.begin(), 1); // Insert 1 at the beginning
        return digits;
    }
};