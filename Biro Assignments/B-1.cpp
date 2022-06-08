#include <iostream>

using namespace std;

int main()
{
    int a[100] = {};
   int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> m;
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}
