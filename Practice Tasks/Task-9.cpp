#include<bits/stdc++.h>
using namespace std;

const int MaxN=100;
struct Data{
    int compId;
    int gen;
};
typedef Data DataArray[MaxN];

int main()
{
    int N;
    string companies[MaxN];
    int M;
    DataArray data;

    int cnt;
    string gen7Comp[MaxN];

    cerr << "N=? :";
    cin >> N;
    for (int i=0;i<N;i++) {
        cerr << i+1 << ". company=? :";
        cin >> companies[i];
    }
    cerr << "M=? :";
    cin >> M;
    int tmp;
    for (int i=0;i<M;i++) {
        cerr << i+1 << ". data :";
        cerr << "  compId=? :";
        cin >> data[i].compId;
        cerr << "  gen=? :";
        cin >> data[i].gen;
        cin >> tmp;
    }
    cnt=0;
    for (int i=0;i<M;i++) {
        if (data[i].gen==7) {
            gen7Comp[cnt]=companies[data[i].compId-1];
            cnt++;
        }
    }

    if (cnt==0) {
        cout << "0 NINCS" << endl;
    } else {
        cout << cnt;
        for (int i=0;i<cnt;i++) {
            cout << " " << gen7Comp[i];
        }
        cout << endl;
    }


    return 0;
}

/*
5
Nintendo
Sega
Sony
Microsoft
Nvidia
6
1 1 5
1 3 4
2 3 4
4 5 4
1 4 5
4 7 1
1 3
*/
