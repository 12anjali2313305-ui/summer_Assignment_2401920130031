class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }

    string solve(string &s, int &i) {
        string result = "";

        while (i < s.length() && s[i] != ']') {

            if (isdigit(s[i])) {
                int num = 0;

                while (isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; 

                string temp = solve(s, i);

                i++; 

                while (num--) {
                    result += temp;
                }
            }
            else {
                result += s[i];
                i++;
            }
        }

        return result;
    }
};
