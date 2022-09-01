#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H

#include <string>
#include <stdexcept>

namespace compositefile
{
    class file_system
    {
    public:
        std::string get_path();
        void set_path(std::string path);
        virtual void open() = 0;
        virtual void del() = 0;

    protected:
        file_system(std::string path);
        std::string path_;
    };
}

#endif
