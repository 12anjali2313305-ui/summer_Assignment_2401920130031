class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        int n = chars.size();

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 1;

            while (i + 1 < n && chars[i] == chars[i + 1]) {
                count++;
                i++;
            }

            res += ch;

            if (count > 1) {
                res += to_string(count);
            }
        }

        for (int i = 0; i < res.size(); i++) {
            chars[i] = res[i];
        }

        return res.size();
    }
};
