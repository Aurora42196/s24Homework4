//
//  list.cpp
//  s24Homework4
//
//  Created by Cameron Maiden on 6/1/24.
//

void listAll(const File* f, string path)  // two-parameter overload
{
    if(f == nullptr)
        return;
    
    path += '/' + f->name(); // Append the current file's name to the path
    
    cout << path << endl; // Output the current directory path
    
    if (f->files() != nullptr) // This code will only run if the current file is a Directory, Plain files do not have m_files and return nullptr
    {
        for (vector<File*>::const_iterator p = f->files()->begin(); p != f->files()->end(); p++)
        {
            listAll(*p, path);
        }
    }
}
