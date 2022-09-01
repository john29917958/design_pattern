#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <string>
#include <vector>
#include "file_system.h"
#include "file.h"

namespace compositefile
{
    class directory : public compositefile::file_system
    {
    public:
        directory(std::string path);
        virtual void open() override;
        virtual void del() override;

    private:
        std::vector<compositefile::file_system *> _file_systems;
    };
}

#endif
