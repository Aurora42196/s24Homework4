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

#include "Set.h"  // class template from problem 2
#include <string>
using namespace std;

class Coord
{
public:
    Coord(int rr, int cc) : m_row(rr), m_col(cc) {}
    Coord() : m_row(0), m_col(0) {}
    double r() const { return m_row; }
    double c() const { return m_col; }
private:
    double m_row;
    double m_col;
};

int main()
{
    Set<int> si;
    si.insert(21);              // OK
    Set<string> ss;
    ss.insert("21 Savage");     // OK
    Set<Coord> sc;
//    sc.insert(Coord(21, -21));  // error!
}
