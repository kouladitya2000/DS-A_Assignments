class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans;
        
        vector<int>temp;
        int mul=(mat.size())*(mat[0].size());
        if((r*c)!=mul)
            return mat;
        int count=c;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                temp.push_back(mat[i][j]);
                count--;
                if(count==0)
                {
                    ans.push_back(temp);
                    temp.clear();
                    count=c;
                }
            }
        }
        return ans;
    }
};
//code by Aditya Koul_1018430_GEHU_DDN
