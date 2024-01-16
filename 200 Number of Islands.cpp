// https://leetcode.com/problems/number-of-islands/description/

class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j, int n, int m){
      vis[i][j]=1;
      queue<pair<int,int>> q;
      q.push({i,j});
      int row[4]={1,0,-1,0};
      int col[4]={0,-1,0,1};
      while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int it=0;it<4;it++){
            int nrow=row[it]+x;
            int ncol=col[it]+y;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && vis[nrow][ncol]==0){
              vis[nrow][ncol]=1;
              q.push({nrow,ncol});
            }
        }
      }
    }
    int numIslands(vector<vector<char>>& grid) {
      int island=0, n=grid.size(), m=grid[0].size();
      vector<vector<int>> vis(n, vector<int> (m, 0));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]=='1' && vis[i][j]==0){
            bfs(grid, vis, i, j, n, m);
            island++;
          }
        }
      }
      return island;
    }
};

