#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N;
queue<int> q;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 카드2
    cin >> N;
    
    for (int i = 1; i <= N; ++i)
        q.push(i);

    while (q.size() != 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();

    return 0;
}