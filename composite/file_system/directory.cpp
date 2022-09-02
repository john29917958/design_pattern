#include "directory.h"

compositefile::directory::directory(std::string path) : file_system(path)
{
    this->_file_systems.push_back(new compositefile::file(".\\file-1"));
    this->_file_systems.push_back(new compositefile::file(".\\file-2"));
    this->_file_systems.push_back(new compositefile::file(".\\file-3"));

    //this->_file_systems.push_back(new compositefile::directory(".\\sub-dir-1"));
    //this->_file_systems.push_back(new compositefile::directory(".\\sub-dir-2"));
    //this->_file_systems.push_back(new compositefile::directory(".\\sub-dir-3"));
}

void compositefile::directory::open()
{
    printf(("Open a directory: " + this->get_path() + "\n").c_str());
}

void compositefile::directory::del()
{
    for (compositefile::file_system *file_system : this->_file_systems)
    {
        file_system->del();
        delete file_system;
    }

    this->_file_systems.empty();
    printf(("Delete directory: " + this->path_ + "\n").c_str());

    this->path_ = "";
}
