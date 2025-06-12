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
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        if(word == "Jessica")
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    

    return 0;
}