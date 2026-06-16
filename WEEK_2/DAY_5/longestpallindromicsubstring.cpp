class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                string sub = s.substr(i, j - i + 1);

                if (isPalindrome(sub) && sub.size() > ans.size()) {
                    ans = sub;
                }
            }
        }

        return ans;
    }
};
