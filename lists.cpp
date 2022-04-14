#include <iostream>
#include <string>
#include "lists_template.h"

using namespace std;

int main(int argc, char* argv[])
{
    string string1="Test1";
    string string2="Test2";
    string string3="Test3";
    list_node_n<string> *new_node1 = new list_node_n(string1);
    list_node_n<string> *new_node2 = new list_node_n(string2);
    list_node_n<string> *new_node3 = new list_node_n(string3);
    list<string> *list_el = new list<string>();

    list_el->add_head(new_node1);
    list_el->add_head(new_node2);
    list_el->add_head(new_node3);
    list_el->show_list();
    list_el->purge_list();
    cout<<"list purged!\n";
    list_el->show_list();

    int int1=1;
    int int2=2;
    int int3=3;
    list_node_n<int> *new_intnode1 = new list_node_n(int1);
    list_node_n<int> *new_intnode2 = new list_node_n(int2);
    list_node_n<int> *new_intnode3 = new list_node_n(int3);
    list<int> *list_el1 = new list<int>();

    list_el1->add_head(new_intnode1);
    list_el1->add_head(new_intnode2);
    list_el1->add_head(new_intnode3);
    list_el1->show_list();
    list_el1->purge_list();
    cout<<"list purged!\n";
    list_el1->show_list();


    return 1;
}

