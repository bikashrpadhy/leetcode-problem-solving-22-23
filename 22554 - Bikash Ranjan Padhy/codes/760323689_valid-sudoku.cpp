class Solution {
public:
   bool isVaild(int a[])
  {
      for (int i = 0; i < 9; i++)
          if (a[i] >= 2) return false;
      return true;
  }

  bool isValidSudoku(vector<vector<char>>& board) {
      for (int i = 0; i < 9; i++)
      {
          int hshrow[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
          for (int z = 0; z < 9; z++)
              if (board[i][z] != '.') hshrow[board[i][z] - '1']++;
          if (isVaild(hshrow) == false) return false;
      }
      for (int i = 0; i < 9; i++)
      {
          int hshrow[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
          for (int z = 0; z < 9; z++)
              if (board[z][i] != '.') hshrow[board[z][i] - '1']++;
          if (isVaild(hshrow) == false) return false;
      }
      for (int i = 0; i < 3; i++){		
          for (int z = 0; z < 3; z++)
          {
              int hshrow[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
              for (int k = i * 3; k < i * 3 + 3; k++)
                  for (int l = z * 3; l < z * 3 + 3; l++)
                      if (board[k][l] != '.') hshrow[board[k][l] - '1']++;
              if (isVaild(hshrow) == false) return false;
          }
      }
      return true;
  }
};