#include "file_system/directory.h"

int main(int argc, char *argv[])
{
    compositefile::file_system* filesystem = new compositefile::file(".\\a-file");
    filesystem->open();
    filesystem->del();

    filesystem = new compositefile::directory(".\\");
    filesystem->open();
    filesystem->del();

    return 0;
}
