//
//  evenvector.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

// Remove the even integers from v.
// It is acceptable if the order of the remaining even integers is not
// the same as in the original vector.

void removeEven(vector<int>& v)
{
    //    if (v.empty())
    //        return;
    //
    ///// This implementation uses array arithmetic
    //    for (size_t i = 0; i < v.size() ;)
    //    {
    //        if(v[i] % 2 == 0)
    //        {
    //            v.erase(v.begin() + i);
    //        }
    //        else // we only iterate if the vector element value is odd
    //        {
    //            i++;
    //        }
    //    }
    
/// This implementaion uses an iterator
    for (vector<int>::iterator p = v.begin(); p != v.end();)
    {
//        cerr << "iterator p points to: " << *p << endl;
        if(*p % 2 == 0)
        {
            p = v.erase(p);
        }
        else
            p++;
    }
}
