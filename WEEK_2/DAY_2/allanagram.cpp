class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int k = p.size();

        sort(p.begin(), p.end());

        for (int i = 0; i <= s.size() - k; i++) {
            string temp = s.substr(i, k);

            sort(temp.begin(), temp.end());

            if (temp == p) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
