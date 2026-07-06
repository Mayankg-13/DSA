class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        vector<vector<int>> answer(n,vector<int>(m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                answer[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=answer;

    }
};