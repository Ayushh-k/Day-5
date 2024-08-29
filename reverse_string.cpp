#include <bits/stdc++.h>
using namespace std;

void reverse(string &s)
{
    int st = 0;
    int e = s.size() - 1;

    while (st <= e)
    {
        swap(s[st], s[e]);
        st++;
        e--;
    }
}

int main()
{
    string s;
    cout << "Enter String: ";
    getline(cin, s);
    cout << "Original string: " << s << endl;
    reverse(s);
    cout << "Reversed string: " << s << endl;

    return 0;
}