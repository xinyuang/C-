class Solution {
int max_area = 0;
int c_area = 0;
public:       
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.size() == 0 || grid.empty()) return 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    c_area = 0;
                    get_area(grid, i, j, c_area);
                    max_area = max(max_area, c_area);                    
                }

            }
        }
        return max_area;
    }
    void get_area(vector<vector<int>>& grid,int i, int j, int& c_area) {
        if (i < 0 || i >= grid.size()) return;
        if (j < 0 || j >= grid[0].size()) return;
        if (grid[i][j] == 0) return;
        grid[i][j] = 0;
        c_area++;
        get_area(grid, i - 1, j, c_area);
        get_area(grid, i + 1, j, c_area);
        get_area(grid, i, j - 1, c_area);
        get_area(grid, i, j + 1, c_area);
    }

        
};

class Solution {
	int max_area = 0;
	int c_area = 0;
	vector<vector<bool>> seen;
public:
	int maxAreaOfIsland(vector<vector<int>>& grid) {
		if (grid.size() == 0 || grid.empty()) return 0;
		int m = grid.size(), n = grid[0].size();
		seen.assign(m, vector<bool>(n, false));
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (grid[i][j] == 1) {
					c_area = get_area(grid, i, j);
					max_area = max(max_area, c_area);
				}
			}
		}
		return max_area;
	}
	int get_area(vector<vector<int>>& grid, int i, int j) {
		if (i < 0 || i >= grid.size()) return 0;
		if (j < 0 || j >= grid[0].size()) return 0;
		if (grid[i][j] == 0 || seen[i][j]) return 0;
		seen[i][j] = true;
		return 1 + get_area(grid, i - 1, j) + get_area(grid, i + 1, j) + get_area(grid, i, j - 1) + get_area(grid, i, j + 1);
	}



};