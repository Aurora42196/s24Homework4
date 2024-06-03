//
//  badvector.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 5/14/24.
//

// Remove the restaurants in v with 2 or fewer stars and destroy them.
// It is acceptable if the order of the remaining restaurants is not
// the same as in the original vector.
void removeBad(vector<Restaurant*>& v)
{
    for(vector<Restaurant*>::iterator p = v.begin(); p != v.end();)
    {
        if((*p)->stars() <= 2)
        {
//            cerr << (*p)->stars() << " star Restaurant will be deleted!" << endl;
            delete *p;
            p = v.erase(p);
        }
        else
        {
            p++;
        }
    }
}
