#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

// tạo 1 mảng toàn false
    vector<bool> present(200005, false);
    int CurrentMex = 0;

    for (int i = 0; i < n; i++) {
        if (a[i]<200005) present[a[i]] = true;
        while (present[CurrentMex]==true)
            CurrentMex++;
        cout << CurrentMex << " ";
    }
    return 0;
}
