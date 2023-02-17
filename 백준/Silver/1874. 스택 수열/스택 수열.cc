#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(0);
    stack <int> s;
    queue <char> ans;
    queue <int> q;
    int N; cin >> N;
    for (int i = 0; i < N; i++) // 입력
    {
        int num; cin >> num;        
        q.push(num);
    }

    for (int i = 1; i < N + 1; i++)
    {
        s.push(i); ans.push('+');
        while (!s.empty() && s.top() == q.front()){
            q.pop();
            s.pop(); ans.push('-');
        }
    }
    // while (!s.empty()){
    //     if (s.top() == q.front()){
    //         q.pop();
    //         s.pop(); ans.push('-');
    //     }
    //     else {
    //         break;
    //     }
    // }
    if (s.empty()){
        while (!ans.empty()){
            cout << ans.front() << '\n';
            ans.pop();
        }
    }
    else {
        cout << "NO";
    }


    return 0;
}
