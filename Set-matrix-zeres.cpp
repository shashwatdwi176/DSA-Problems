//Brute force approach

#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> zeroMatrix (vector<vector<int>> &matrix, int n, int m)
{
    for (int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            if (matrix[i][j]==0){
               for (int k=0;k<n;k++){
                if (matrix[i][k]!=0){
                    matrix[i][k]=-1;
                }
               }
               for (int h=0;h<m;h++){
                if (matrix[h][j]!=0){
                    matrix[h][j]=-1;
                }
               }
            }
        }
    }

    for (int i=0 ; i<n;i++){
        for (int j=0;j<m;j++){
            if (matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}

vector<vector<int>> zeroMatrix (vector<vector<int>> &matrix, int n, int m)
{
   int col[m]={0};
   int row[n]={0};

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0; j<m;j++){
            if (row[i]==1 || col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
