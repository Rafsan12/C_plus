#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    string name;
    int roll;
    int mark;
};

int main() {
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }

    Student nm;

    nm.mark = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (a[i].mark < nm.mark) {
            nm = a[i];
        }
    }

    cout << nm.name << " " << nm.roll << " " << nm.mark << endl;

    return 0;
}