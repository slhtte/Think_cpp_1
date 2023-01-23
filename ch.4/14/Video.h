#ifndef VIDEO_H
#define VIDEO_H

#include <string>

struct Video
{
    std::string name;
    int price;
    bool have;

    void init(std::string n, int p);
    bool is_have();
    void give();
    void take();
    void print();
};

#endif
