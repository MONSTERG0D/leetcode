class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int temp = x;
        int size = 0;
        while (temp != 0) {
            size++;
            temp /= 10;
        }
        if (x == 0) return true;
        int arr[size];
        for (int j = 0; j < size; j++) {
            arr[j] = x % 10;
            x /= 10;
        }
        for (int k = 0; k < size / 2; k++) {
            if (arr[k] != arr[size - k - 1]) {
                return false;
            }
        }
        return true;
    }
};
