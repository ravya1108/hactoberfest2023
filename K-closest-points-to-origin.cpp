class Solution {
private:
    double dist(const vector<int> &arr) {
        int sq = arr[0]*arr[0] + arr[1]*arr[1];
        return sqrt(sq);
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
        int n = points.size();
        if (k == n) return points;
        vector<vector<int>> res;
        map<double, vector<int>> mp;
        // O(n * log(n)) time
        for (int i = 0; i < n; i++) {
            double d = dist(points[i]);
            mp[d].push_back(i);
        }
        // O(k) time
        for (auto it = mp.begin(); it != mp.end(); it++) {
            vector<int> vec = it->second;
            for (int &x : vec) {
                res.push_back(points[x]);
                if (k == res.size()) return res;
            }
        }
        return {};
    }
};


/*
  Time Complexity : O(n * log(n)) + O(k)
  Space Complexity : O(n) + O(k)
*/
