#include <memory>
#include <iostream>
#include <string>
#include <functional>

using namespace std;
    
template <typename T>
void ProcessArguments(std::function<void(const T &)> process)
{}

template <typename T, typename HEAD, typename ... TAIL>
void ProcessArguments(std::function<void(const T &)> process, const HEAD &head, const TAIL &... tail)
{
  process(head);
  ProcessArguments(process, tail...);
}

int buffer[10];
int main(int argc, char **argv)
{
  int *p = buffer;

  for (unsigned long int i = 0; i < 10E6; ++i)
  {
    p = buffer;
    ProcessArguments<int>([&p](const int &v) { *p++ = v; }, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
  }
}


