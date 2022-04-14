#ifndef CPPTEST_H_
#define CPPTEST_H_

#include <string>

using std;

class TestClass
{
    private:
        string name;
        string last_name;
        int unique_id;
    public:
        string getName() {return name;}
        string getLastName() {return last_name;}
        int getUniqueId() {return unique_id;}
        void setName(string name) {name = name;}
        void setLastName(string name) {last_name = last_name;}
        void setUniqueID(int id) {unique_id = id;}
}

#endif
