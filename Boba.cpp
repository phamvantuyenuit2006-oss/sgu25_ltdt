#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        map<string,int> cnt;
        int res = 0;
        for (int i = 0; i + 2 < (int)s.size(); i++) {
            string sub = s.substr(i, 3);
            cnt[sub]++;
            res = max(res, cnt[sub]);
        }
        cout << res << "\n";   // dùng đúng dấu ngoặc kép ASCII
    }
    return 0;
}
