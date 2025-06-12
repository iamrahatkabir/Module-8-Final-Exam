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


class Student{
    public:
    string nm;
    int cls;
    string sec;
    int id;
};


int main()
{
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id;
    }

    

    // reverse(a.sec.begin(), a.sec.end());

    int i = 0, j = n-1;

    while(i < j)
    {
        string temp = a[i].sec;
        a[i].sec = a[j].sec;
        a[j].sec = temp;

        i++;
        j--;
    }

    for(int i = 0; i < n; i++)
    {
        // reverse(a[i].sec.begin(), a[i].sec.end());
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }


    

    return 0;
}