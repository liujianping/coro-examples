#include <boost/coroutine/coroutine.hpp>
#include <iostream>

void hello()
{
    std::cout<<"hello boost.coroutine!"<<std::endl;
}

int main()
{
    boost::this_coroutine::child(create_coroutine(hello));
    boost::this_coroutine::resume();
    return 0;
}
