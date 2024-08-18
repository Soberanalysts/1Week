#include<bits/stdc++.h>

using namespace std;


int dwarfHeight;				//난쟁이 키

int heightList[9] = { 0 };      //9난쟁이 키 목록
int sum = 0;
vector<int> v;
pair<int, int> ret;

void solve() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < i; j++) {
            if (sum - heightList[i] - heightList[j] == 100) {
                ret = { i,j };
                return;
            }
        }
    }
}


int main() {

    for (int i = 0; i < 9; i++) {   //난쟁이 키 이벽
        cin >> dwarfHeight;
        heightList[i] = dwarfHeight;
        sum += heightList[i];
    }
    solve();
    for (int i = 0; i < 9; i++)
    {
        if (ret.first == i || ret.second == i)continue;
        v.push_back(heightList[i]);
    }
    sort(v.begin(), v.end());
    for (int i : v) {
        cout << i << "\n";
    }
    return 0;
}