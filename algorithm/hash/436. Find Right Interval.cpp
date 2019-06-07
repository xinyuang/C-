class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        map<int,int> hash;
        vector<int> res;
        for (int i = 0; i < intervals.size(); i++) {
            hash[intervals[i].start] = i;
        }
        for (Interval inter : intervals) {
            auto itr = hash.lower_bound(inter.end);
            if (itr != hash.end()) res.push_back(itr->second);
            else res.push_back(-1);
        }
        return res;
    }
};