#include "file.h"

compositefile::file::file(std::string path) : file_system(path)
{
}

void compositefile::file::open()
{
    printf(("Open a file: " + this->get_path()).c_str());
}

void compositefile::file::del()
{
    printf(("Delete a file: " + this->get_path()).c_str());
}
