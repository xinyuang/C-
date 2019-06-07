class Solution {
public:
    int lengthLongestPath(string input) {
        istringstream ss(input);
        string token;
        unordered_map<int, int> len;
        len[0] = 0;
        int max_len = 0;
        while(getline(ss, token)) {
            auto pos = token.find_last_of('\t');
            string name = (pos != string::npos) ? token.substr(pos + 1) : token; 
            int depth = token.length() - name.length();
            if (name.find('.') != string::npos) max_len = max(max_len, len[depth] + (int)name.length());
            else len[depth + 1] = len[depth] + 1 + (int)name.length();
        }
        return max_len;
    }
};