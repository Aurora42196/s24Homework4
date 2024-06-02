//
//  main.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

//#include <iostream>
//#include <vector>
//#include <list>
////#include "Set.h"
//using namespace std;
//
//const int MAGIC = 11223344;
//
//void testx()
//{
//    bool allValid = true;
//    
//    vector<int> v1(5, MAGIC);
//    int k = 0;
//    for ( ; k != v1.size(); k++)
//    {
//        if (v1[k] != MAGIC)
//        {
//            cout << "v1[" << k << "] is " << v1[k] << ", not " << MAGIC <<"!" << endl;
//            allValid = false;
//        }
//        if (k == 2)
//        {
//            for (int i = 0; i < 5; i++)
//                v1.push_back(MAGIC);
//        }
//    }
//    if (allValid  &&  k == 10)
//        cout << "Passed test 1" << endl;
//    else
//        cout << "Failed test 1" << endl;
//    
//    allValid = true;
//    list<int> l1(5, MAGIC);
//    k = 0;
//    for (list<int>::iterator p = l1.begin(); p != l1.end(); p++, k++)
//    {
//        if (*p != MAGIC)
//        {
//            cout << "Item# " << k << " is " << *p << ", not " << MAGIC <<"!" << endl;
//            allValid = false;
//        }
//        if (k == 2)
//        {
//            for (int i = 0; i < 5; i++)
//                l1.push_back(MAGIC);
//        }
//    }
//    if (allValid  &&  k == 10)
//        cout << "Passed test 2" << endl;
//    else
//        cout << "Failed test 2" << endl;
//    
//    allValid = true;
//    vector<int> v2(5, MAGIC);
//    k = 0;
//    for (vector<int>::iterator p = v2.begin(); p != v2.end(); p++, k++)
//    {
//        if (k >= 20)  // prevent infinite loop
//            break;
//        if (*p != MAGIC)
//        {
//            cout << "Item# " << k << " is " << *p << ", not " << MAGIC <<"!" << endl;
//            allValid = false;
//        }
//        if (k == 2)
//        {
//            for (int i = 0; i < 5; i++)
//                v2.push_back(MAGIC);
//        }
//    }
//    if (allValid  &&  k == 10)
//        cout << "Passed test 3" << endl;
//    else
//        cout << "Failed test 3" << endl;
//}

#include "Set.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

void test()
{
    Set<int> si;
    Set<string> ss;
    assert(si.empty());
    assert(ss.empty());
    assert(si.size() == 0);
    assert(ss.size() == 0);
    assert(si.insert(10));
    assert(ss.insert("hello"));
    assert(si.contains(10));
    assert(ss.contains("hello"));
    int i;
    assert(si.get(0, i)  &&  i == 10);
    string s;
    assert(ss.get(0, s)  &&  s == "hello");
    assert(si.erase(10));
    assert(ss.erase("hello"));
    Set<int> si2(si);
    Set<string> ss2(ss);
    si.swap(si2);
    ss.swap(ss2);
    si = si2;
    ss = ss2;
    unite(si,si2,si);
    unite(ss,ss2,ss);
    inOnlyOne(si,si2,si);
    inOnlyOne(ss,ss2,ss);
}

int main()
{
    test();
    cout << "Passed all tests" << endl;
}
