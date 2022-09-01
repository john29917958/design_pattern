#include "directory.h"

compositefile::directory::directory(std::string path) : file_system(path)
{
    this->_file_systems.push_back(new compositefile::file("sub-dir-1"));
    this->_file_systems.push_back(new compositefile::file("sub-dir-2"));
    this->_file_systems.push_back(new compositefile::file("sub-dir-3"));
}

void compositefile::directory::open()
{
    printf(("Open a directory: " + this->get_path()).c_str());
}

void compositefile::directory::del()
{
    for (compositefile::file_system *file_system : this->_file_systems)
    {
        printf(("Delete a file system object: " + file_system->get_path()).c_str());
        delete file_system;
    }

    this->_file_systems.empty();
    this->path_ = "";
}
