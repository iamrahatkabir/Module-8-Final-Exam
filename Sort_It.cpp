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
    int math_marks;
    int english_marks;
};


bool cmp(Student l, Student r)
{

    // cout << l.math_marks + l.english_marks << endl;
    if(l.math_marks + l.english_marks == r.math_marks + r.english_marks)
    {
        return l.id < r.id;
    }
    else{
        return l.math_marks + l.english_marks > r.math_marks + r.english_marks;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math_marks >> a[i].english_marks;
    }

    sort(a, a+n, cmp);


    for(int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }


    

    return 0;
}