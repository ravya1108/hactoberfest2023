class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>vec;
        int left=0,right=matrix[0].size()-1,top=0,down=matrix.size()-1;
        while(left<=right && top<=down)
        {
          
            for(int i=left;i<=right;i++)
            {
                cout<<"top";
                cout<<matrix[top][i]<<endl;
                vec.push_back(matrix[top][i]);
            }
           
            top++;
            for(int i=top;i<=down;i++)
            {
                cout<<"right";
                cout<<matrix[i][right]<<endl;
                 vec.push_back(matrix[i][right]);
            }
            right--;
            if(top<=down){
            for(int i=right;i>=left;i--)
            {
                cout<<"bottom";
                cout<<matrix[down][i]<<endl;
                vec.push_back(matrix[down][i]);
            }
            }
            down--;
            if(left<=right)
            {
            for(int i=down;i>=top;i--)
            {
                cout<<"left";
                cout<<matrix[i][left]<<endl;
                vec.push_back(matrix[i][left]);
            }
            }
            left++;
            cout<<endl;

        }
        return vec;
    }
};
