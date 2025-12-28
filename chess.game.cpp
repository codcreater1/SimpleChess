

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char board[8][8] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}



    };
    while (true) {
        
 




        for (int i = 0; i < 8; i++)
        {
            cout << 8 - i << " ";
            for (int j = 0; j < 8; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << "  a b c d e f g h" << endl;





        string from, to;
        cout << "enter move (e2 e4) or 'q' to quit :";
        cin >> from;
        if (from == "q")break;
        cin >> to;


        int fromRow = (8 - from[1] - '0');
        int fromCol = from[0] - 'a';
        int toRow = (8 - to[1] - '0');
        int toCol = to[0] - 'a';

        char piece = board[fromRow][fromCol];

        if (piece == 'P' && toRow >= toCol) {
            cout << "Invalid move for white pawn!" << endl;
            continue;



        }
        if (piece == 'p' && toRow <= toCol) {
            cout << "Invalid move for black pawn!" << endl;
            continue;
        
        }


        board[toRow][toCol] = board[fromRow][fromCol];
        board[fromRow][fromCol] = '.';
        cout << endl;
    }


    return 0;
}

