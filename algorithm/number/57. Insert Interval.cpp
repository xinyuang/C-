class Solution {
public:
    static bool compare(const Interval& a, const Interval& b) {
        return (a.end < b.start);
    }
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        auto range = equal_range(intervals.begin(), intervals.end(), newInterval, compare);
        auto itr1 = range.first, itr2 = range.second;
        if (itr1 == itr2) {
            intervals.insert(itr1, newInterval);
        }
        else {
            itr2--;
            itr2->start = min(newInterval.start, itr1->start);
            itr2->end = max(newInterval.end, itr2->end);
            intervals.erase(itr1, itr2);
        }
        return intervals;
    }

};