#include<bits/stdc++.h>
using namespace std;

string s;
int numPaths = 0;
int idx = -1;

bool occupied[49] = {false};

bool feasible(int i, int j)
{
    if(i>=0 && i <= 6 && j >=0 && j <= 6 && !occupied[i*7 + j]) return true;
    else return false;
}

void findPaths(int i, int j)
{
    ++idx;
    if(i == 6 && j == 0)
    {
        // reached our destination
        if(idx == s.size()) numPaths++;
        idx--;
        return;
    }
    
    occupied[i*7 + j] = true;
    
    switch(s[idx])
    {
        case 'U': {
            if(i && !occupied[(i-1)*7 + j] && !(!feasible(i-2, j) && feasible(i-1,j-1) && feasible(i-1,j+1))) 
            {
                //occupied[(i-1)*7 + j] = true;
                findPaths(i-1, j);
            }
            break;
        }
        case 'D': {
            if(i!=6 && !occupied[(i+1)*7+j] && !(!feasible(i+2, j) && feasible(i+1,j-1) && feasible(i+1,j+1))) 
            {
                //occupied[(i+1)*7+j] = true;
                findPaths(i+1, j);
            }
            break;
        }
        case 'L': {
            if(j && !occupied[i*7+j-1] && !(!feasible(i, j-2) && feasible(i+1,j-1) && feasible(i-1,j-1))) 
            {
                //occupied[i*7+j-1] = true;
                findPaths(i, j-1);
            }
            break;
        }
        case 'R': {
            if(j!=6 && !occupied[i*7+j+1] && !(!feasible(i, j+2) && feasible(i+1,j+1) && feasible(i-1,j+1))) 
            {
                //occupied[i*7+j+1] = true;
                findPaths(i, j+1);
            }
            break;
        }
        case '?': {
            if(i && !occupied[(i-1)*7 + j] && !(!feasible(i-2, j) && feasible(i-1,j-1) && feasible(i-1,j+1))) 
            {
                //occupied[(i-1)*7 + j] = true;
                findPaths(i-1, j);
            }
            if(i!=6 && !occupied[(i+1)*7+j] && !(!feasible(i+2, j) && feasible(i+1,j-1) && feasible(i+1,j+1))) 
            { 
               //occupied[(i+1)*7+j] = true;
                findPaths(i+1, j);
            }
            if(j && !occupied[i*7+j-1] && !(!feasible(i, j-2) && feasible(i+1,j-1) && feasible(i-1,j-1))) 
            {
                //occupied[i*7+j-1] = true;
                findPaths(i, j-1);
            }
            if(j!=6 && !occupied[i*7+j+1] && !(!feasible(i, j+2) && feasible(i+1,j+1) && feasible(i-1,j+1))) 
            {
                //occupied[i*7+j+1] = true;
                findPaths(i, j+1);
            }
            break;
        }
    }
    occupied[i*7 + j] = false;
    --idx;

    //cout << i << ' ' << j << '\n';
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;

    findPaths(0,0);

    cout << numPaths;

}