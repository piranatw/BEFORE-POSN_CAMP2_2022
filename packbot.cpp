#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define pii pair<int, int>
using namespace std;
stack<int> ans, op;
double p[4] = {0, 4, 8, 16};
void play() {
    int a = ans.top(); ans.pop();
    int b = ans.top(); ans.pop();
    int x = op.top();  op.pop();
    int cal = a + b + (p[x] / 100.0 * (a+b));
    ans.push(cal);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("input.txt", "r", stdin);

    string str;
    cin >> str;
    for (auto ch : str) {
        if ('A' <= ch && ch <= 'Z') ans.push(20);
        else {
            if (ch == '[') op.push(0);
            else if (ch == ']') {
                while (op.top() != 0) {
                    play();
                }
                op.pop();
            } else {
                while (!op.empty() && ch - '0' <= op.top()) {
                    play();
                }
                op.push(ch - '0');
            }
        }
    }
    while (!op.empty()) {
        play();
    }
    cout << ans.top();

    return 0;
}
