//
//  evenlist.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

// Remove the even integers from li.
// It is acceptable if the order of the remaining even integers is not
// the same as in the original list.
void removeEven(list<int>& li)
{
    if(li.empty())
        return;
    for (list<int>::iterator p = li.begin(); p != li.end();)
    {
//        cerr << "iterator p points to: " << *p << endl;
        if(*p % 2 == 0)
        {
//            cerr << *p << " will be erased" << endl;
            p = li.erase(p); // the iterator gets reassigned to the node after the one that gets erased
//            cerr << "p now points to: " << *p << endl;
        }
        else // We only want to increment the iterator is the value is odd
        {
//            cerr << *p << " is odd" << endl;
            p++;
        }
    }
}
