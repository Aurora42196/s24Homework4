//
//  evenvector.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

// Remove the even integers from v.
// It is acceptable if the order of the remaining even integers is not
// the same as in the original vector.
/// This implementaion uses an iterator
///        for (vector<int>::iterator p = v.begin(); p != v.end();)
///        {
///            cerr << "iterator p points to: " << *p << endl;
///
///            if(*p % 2 == 0)
///            {
///                p = v.erase(p);
///            }
///            else
///                p++;
///        }

void removeEven(vector<int>& v)
{
    if (v.empty())
        return;
    
/// This implementation uses array arithmetic
    for (size_t i = 0; i < v.size() ;)
    {
        if(v[i] % 2 == 0)
        {
            v.erase(v.begin() + i);
        }
        else // we only iterate if the vector element value is odd
        {
            i++;
        }
    }
}

void test()
{
    int a[9] = { 4, 1, 7, 6, 5, 8, 0, 3, 2 };
    vector<int> x(a, a+9);  // construct x from the array
    assert(x.size() == 9 && x.front() == 4 && x.back() == 2);
    removeEven(x);
    assert(x.size() == 4);
    sort(x.begin(), x.end());
    int expect[4] = { 1, 3, 5, 7 };
    for (int k = 0; k < 4; k++)
        assert(x[k] == expect[k]);
}

int main()
{
    test();
    cout << "Passed" << endl;
}
