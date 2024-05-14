//
//  evenlist.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

// Remove the even integers from li.
// It is acceptable if the order of the remaining even integers is not
// the same as in the original list.
void removeEven(list<int>& li)
{
    for (list<int>::iterator p = li.begin(); p != li.end(); p++)
    {
        if(*p % 2 == 0)
        {
            li.erase(p);
            p--;
        }
    }
}

void test()
{
    int a[9] = { 4, 1, 7, 6, 5, 8, 0, 3, 2 };
    list<int> x(a, a+9);  // construct x from the array
    assert(x.size() == 9 && x.front() == 4 && x.back() == 2);
    removeEven(x);
    assert(x.size() == 4);
    vector<int> v(x.begin(), x.end());  // construct v from x
    sort(v.begin(), v.end());
    int expect[4] = { 1, 3, 5, 7 };
    for (int k = 0; k < 4; k++)
        assert(v[k] == expect[k]);
}

int main()
{
    test();
    cout << "Passed" << endl;
}
