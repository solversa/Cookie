class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = (int)citations.size();
        sort(citations.begin(), citations.end());
        for (int i = 0; i < n; ++i) {
            if (n - i <= citations[i]) {
                return n - i;
            }
        }
        return 0;
    }
};
