#ifndef FILE_H
#define FILE_H

#include <string>
#include "file_system.h"

namespace compositefile
{
    class file : public file_system
    {
    public:
        file(std::string path);
        virtual void open() override;
        virtual void del() override;
    };
}

#endif