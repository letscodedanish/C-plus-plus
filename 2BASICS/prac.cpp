#include<SVL.h>
void addSolution(vector<vector<int>>&ans,vector<vector<int>>& board){
    vector<int>temp;
    
    for(int i=0; i<n ;i++){
        for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col,vector<vector<int>>&board,int n){
    int x=row;
    int y=col;
    
    //check for same row
    while(y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
        x--;
    }
    x=row;
    y=col;
    
    //check for diagonal
    while(x<n && y>=0){
        if(board[x][y]==1)
            return false;
        y--;
        x++;
    }
    
    return true;
}

void solve(int col,vector<vector<int>>&ans,vector<vector<int>>&board,int n){
    //base case
    if(col==n){
        addsolution(board,ans,n);
        return;
    }
    //solve 1 case and the recursion will take care
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            //if placing queen is safe
            board[row][col]==1;
            solve(col+1,ans,board,n);
            //backtrack
            board[row][col]=0;
        }
    }
}

vector<vector<int>>nQueen(int n){
    vector<vector<int>board(n,vector<int>(n,0));
    vector<vector<int>>ans;
    
    solve(0,ans,board,n);
    return ans;
}