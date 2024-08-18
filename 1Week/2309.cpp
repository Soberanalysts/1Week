#include<bits/stdc++.h>

using namespace std;



int main() {
    int dwarfHeight;				//≥≠¿Ô¿Ã ≈∞

    int heightList[9] = { 0 };

    for (int i = 0; i < 9; i++) {   //≥≠¿Ô¿Ã ≈∞ ¿Ã∫Æ
        cin >> dwarfHeight;
        heightList[i] = dwarfHeight;
    }   


    sort(heightList,heightList+9);
    do {
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            sum += heightList[i];
        }
        if (sum == 100)break;
    } while (next_permutation(heightList, heightList + 9));
    for (int i = 0; i < 7; i++) cout << heightList[i] << "\n";
    return 0;

}
