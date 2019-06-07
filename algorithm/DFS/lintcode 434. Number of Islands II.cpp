class Solution {
    vector<int> res;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
public:
    /**
     * @param n: An integer
     * @param m: An integer
     * @param operators: an array of point
     * @return: an integer array
     */
    vector<int> numIslands2(int n, int m, vector<Point> &operators) {
        if (operators.size() == 0 || operators.empty()) return res;
        vector<int> root(m*n, -1);
        int count = 0;
        for (Point op : operators) {
            int id = m * op.x + op.y;
            if (root[id] != -1) {
                res.push_back(count);
                continue;
            }
            root[id] = id;
            count++;
            for (int i = 0; i < 4; i++) {
                if (op.x + dx[i] < 0 || op.x + dx[i] >= n) continue;
                if (op.y + dy[i] < 0 || op.y + dy[i] >= m) continue;
                int cur_id = m * (op.x + dx[i]) + op.y + dy[i];
                if (root[cur_id] == -1) continue;
                int p = find_root(root, cur_id), q = find_root(root, id);
                if (p != q) {
                    root[p] = q;
                    count--;
                }
            }
            res.push_back(count);
        }
        return res;
    }
    int find_root(vector<int>& root, int id) {
        return (root[id] == id) ? id : find_root(root, root[id]);
    }
};