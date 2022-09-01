#include "file_system.h"

compositefile::file_system::file_system(std::string path)
{
    this->set_path(path);
}

std::string compositefile::file_system::get_path()
{
    return this->path_;
}

void compositefile::file_system::set_path(std::string path)
{
    if (path.length() == 0)
    {
        throw std::invalid_argument("Path is set to empty string.");
    }

    this->path_ = path;
}