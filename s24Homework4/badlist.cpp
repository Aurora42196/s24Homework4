//
//  badlist.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

// Remove the restaurants in li with 2 or fewer stars and destroy them.
// It is acceptable if the order of the remaining restaurants is not
// the same as in the original list.
void removeBad(list<Restaurant*>& li)
{
    if(li.empty())
        return;
    for (list<Restaurant*>::iterator p = li.begin(); p != li.end();)
    {
        Restaurant* rp = *p;
        if((*p)->stars() <= 2)
        {
//            cerr << rp->stars() << " star Restaurant will be removed!" << endl;
            delete rp; // calls the destructor for Restaurant to deallocate memory
            p = li.erase(p); // node that p points to (a pointer to a Restaurant) gets removed
        }
        else // Restaurant has more than 2 stars
        {
//            cerr << rp->stars() << endl;
            p++;
        }
    }
}
