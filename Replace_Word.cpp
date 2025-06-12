#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cin.ignore();
        }
        getline(cin, s);

        int space = s.find(" ");

        int last_element_size = s.size() - (space + 1);

        string s1 = "";

        for (int l = space + 1; l < s.size(); l++)
        {
            s1.push_back(s[l]);
        }

        for (int k = 0; k < s.size(); k++)
        {
            int repl = s.find(s1);
            if (repl != -1)
            {
                s.replace(repl, last_element_size, "#");
            }
        }

        int new_space = s.find(" ");

        s.replace(new_space, last_element_size + 1, "");

        cout << s << endl;
    }

    return 0;
}