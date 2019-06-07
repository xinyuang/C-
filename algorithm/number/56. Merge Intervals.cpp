class Solution {
public:
    bool static compare(const Interval& a, const Interval& b) {
        return (a.start < b.start);
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        if (intervals.empty() || intervals.size() == 0) return intervals;
        sort(intervals.begin(), intervals.end(), compare);
        vector<Interval> res;
        res.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            if (res.back().end < intervals[i].start) res.push_back(intervals[i]);
            else res.back().end = max(res.back().end, intervals[i].end);
        }
        return res;
    }
};