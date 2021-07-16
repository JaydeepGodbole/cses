#include<bits/stdc++.h>

using namespace std;

int num_positions = 0;
int rowwise_occupation[8] = {-1};
bool board[8][8];
bool okay;

void recursive_find(int level)
{
    if(level == 8)
    {
        // have reached the bottom row
        num_positions++;
        return;
    }

    for(int j = 0; j < 8; j++)
    {
        if(board[level][j]) continue;
        okay = true;
        // checking if (i,j) is available based on the previously placed queens and not reserved
        for(int i = 0; i<level; i++)
        {
            if(rowwise_occupation[i] == j) {okay = false; break;} // a previous row has placed a queen at column j
            if( abs(rowwise_occupation[i] - j) == (level - i)) {okay = false; break;} // diagonally attacking queen placed at row i
            // row number level isn't occupied
        }
        if(okay)
        {
            rowwise_occupation[level] = j;
            recursive_find(level + 1);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    char c;
    short i =0; short j = 0;
    for(int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < 8; j++)
        {
            if(s[j] == '.') board[i][j] = 0;
            else board[i][j] = 1;
        }
    }

    recursive_find(0);

    cout << num_positions;

    return 0;
}