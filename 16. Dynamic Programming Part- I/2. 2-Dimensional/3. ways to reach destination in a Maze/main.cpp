#include<bits/stdc++.h>
using namespace std;
#define p 4

int main()
{
    int maze[p][p];
    memset(maze, 0, sizeof(maze));
    int n;
    cout << "Enter block number\n";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        maze[a][b] = -1;
    }
    if(maze[0][0] == -1)
        return 0;
    for(int i = 0; i < 4; i++)
    {
        if(maze[i][0] == 0)
            maze[i][0] = 1;
        else
            break;
    }

    for(int i = 1; i < 4; i++)
    {
        if(maze[0][i] == 0)
            maze[0][i] = 1;
        else
            break;
    }

    for(int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j ++)
        {
            if(maze[i][j] == -1)
                continue;
            else
            {
                if(maze[i-1][j] > 0)
                    maze[i][j] = maze[i][j] + maze[i-1][j];
                if(maze[i][j-1] > 0)
                    maze[i][j] = maze[i][j] + maze[i][j-1];
            }
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            cout << maze[i][j] << " ";
        cout << endl;
    }
    return 0;
}
