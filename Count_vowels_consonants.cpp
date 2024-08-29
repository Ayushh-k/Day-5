#include <bits/stdc++.h>
using namespace std;

vector<int> count(string &s)
{
    vector<int> cnt(2, 0);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                cnt[0]++;
            }
            else
            {
                cnt[1]++;
            }
        }
    }

    return cnt;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    vector<int> cnt = count(s);

    cout << "Number of vowels in given string = " << cnt[0] << endl
         << "Number of Consonants in given string = " << cnt[1] << endl;

    return 0;
}