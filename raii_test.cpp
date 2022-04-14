#include <cstdlib>
#include <mutex>
#include <exception>

std::mutex m;

bool everything_ok()
{
}

void f()
{

    throw  new std::bad_exception();
}

void bad() 
{
    m.lock();                    // acquire the mutex
    f();                         // if f() throws an exception, the mutex is never released
    if(!everything_ok()) return; // early return, the mutex is never released
    m.unlock();                  // if bad() reaches this statement, the mutex is released
}
 
void good()
{
    std::lock_guard<std::mutex> lk(m); // RAII class: mutex acquisition is initialization
    f();                               // if f() throws an exception, the mutex is released
    if(!everything_ok()) return;       // early return, the mutex is released
} 

int main()
{
    return 1;
}

