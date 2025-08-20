#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                char digit = board[i][j];
                
                if (digit < '1' || digit > '9') return false;

                
                if (rows[i].count(digit)) return false;
                rows[i].insert(digit);

                
                if (cols[j].count(digit)) return false;
                cols[j].insert(digit);

                
                int boxIdx = (i / 3) * 3 + j / 3;
                if (boxes[boxIdx].count(digit)) return false;
                boxes[boxIdx].insert(digit);
            }
        }
        return true;
    }