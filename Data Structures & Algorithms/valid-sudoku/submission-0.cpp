#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map <int , unordered_set <char> > rows ;
        map <int , unordered_set <char> > columns ;
        map < pair<int , int > , unordered_set <char> >squares ;

        for(int r = 0 ; r < 9 ; r++) 
        {
            for(int c = 0 ; c < 9 ; c++)
            {
                if(board[r][c] == '.') 
                {
continue ;
                }

                pair<int , int> squarekey = {r/3 , c/3} ;

 // if anyone of these counts give us 1 then the iterated board[r][c] is 
// either already in a SAME row or column or square hence the sudoku will be invalid


 if(  rows[r].count(board[r][c]) ||columns[c].count(board[r][c]) ||  squares[squarekey].count(board[r][c])    )
     {

return false ;


     }     

// As the number in not available in the same row or column or squares 
//we will store it with respect to its row and column and square index 
// for checking the entire updated 3 sets(rows , columns and squares )
// with the NEXT iteration board[r][c]


     rows[r].insert(board[r][c]);
     columns[c].insert(board[r][c]);
     squares[squarekey].insert(board[r][c]);        
                                             

            }
        }

        return true ; 
    }
};
