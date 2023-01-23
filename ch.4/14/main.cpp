#include "Video.h"
#include "Stack.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    Stack stack;
    stack.initialize();
    
    for (int i = 0; i < 5; ++i)
    {
        Video *video = new Video;
        string num = to_string(i);
        video->init("Video_" + num, i * 2 + 3);
        stack.push(video);
    }

    while (stack.peek())
    {
        Video *tmp = (Video *)stack.pop();
        tmp->print();
    }

    stack.cleanup();
}
