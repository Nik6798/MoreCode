#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> res;
void print(vector<vector<int>> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << " ";
    }
    cout << endl;
}
void queenMoveLeft(int n, int r_q, int c_q)
{
    if (c_q < 1)
    {
        return;
    }
    queenMoveLeft(n, r_q, c_q - 1);
    res.push_back({r_q, c_q});
}
void queenMoveRight(int n, int r_q, int c_q)
{
    if (c_q > n)
    {
        return;
    }
    queenMoveRight(n, r_q, c_q + 1);
    res.push_back({r_q, c_q});
}
void queenMoveUp(int n, int r_q, int c_q)
{
    if (r_q > n)
    {
        return;
    }
    queenMoveUp(n, r_q + 1, c_q);
    res.push_back({r_q, c_q});
}
void queenMoveDown(int n, int r_q, int c_q)
{
    if (r_q < 1)
    {
        return;
    }
    queenMoveDown(n, r_q - 1, c_q);
    res.push_back({r_q, c_q});
}
void queenMoveLUDiagonal(int n, int r_q, int c_q)
{
    if (r_q > n || c_q < n)
    {
        return;
    }
    queenMoveLUDiagonal(n, r_q + 1, c_q - 1);
    res.push_back({r_q, c_q});
}
void queenMoveLDDiagonal(int n, int r_q, int c_q)
{
    if (c_q < 1 || r_q < 1)
    {
        return;
    }
    queenMoveLDDiagonal(n, r_q - 1, c_q - 1);
    res.push_back({r_q, c_q});
}
void queenMoveRUDiagonal(int n, int r_q, int c_q)
{
    if (r_q > n || c_q > n)
    {
        return;
    }
    queenMoveRUDiagonal(n, r_q + 1, c_q + 1);
    res.push_back({r_q, c_q});
}
void queenMoveRDDiagonal(int n, int r_q, int c_q)
{
    if (c_q > n || r_q < 1)
    {
        return;
    }
    queenMoveRDDiagonal(n, r_q - 1, c_q + 1);
    res.push_back({r_q, c_q});
}

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles)
{
    if (n == 1)
    {
        cout << "0";
        return 0;
    }
    queenMoveLeft(n, r_q, c_q - 1);

    print(res);
    queenMoveRight(n, r_q, c_q + 1);
    print(res);
    queenMoveUp(n, r_q + 1, c_q);
    print(res);
    queenMoveDown(n, r_q - 1, c_q);
    print(res);
    queenMoveLUDiagonal(n, r_q + 1, c_q - 1);
    print(res);
    queenMoveLDDiagonal(n, r_q - 1, c_q - 1);
    print(res);
    queenMoveRUDiagonal(n, r_q + 1, c_q + 1);
    print(res);
    queenMoveRDDiagonal(n, r_q - 1, c_q + 1);
    print(res);
    // sort(begin(res), end(res));
    // sort(begin(obstacles), end(obstacles));
    print(res);
    return 0;
}

int main()
{
    vector<vector<int>> obs{{5, 5}, {4, 2}, {2, 3}};
    queensAttack(8, 0, 4, 3, obs);
    return 0;
}