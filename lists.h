#include <iostream>
#include <memory>
#include <string>
#include "lists_template.h"

using namespace std;

/*class list_node_n
{
    string data_ptr;
    list_node_n *next;

    friend class list;
};*/

class list_asd
{
    private:
       list_node_n<string> *list_l;
       int count;
    public:
        list();
        ~list();
        bool add_head(list_node_n<string> *new_node);
        bool add_tail(list_node_n<string> *new_node);
        bool remove_head();
        bool remove_tail();
        bool remove_key(list_node_n<string> *new_node);
        int show_list();
        int purge_list();
};


