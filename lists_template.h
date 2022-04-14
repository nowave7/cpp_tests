#include <iostream>

template <typename Type> class list;

template <typename Type> class list_node_n
{
    private:
        Type m_data;
        list_node_n *m_next;
    public:
        list_node_n(const Type & data):m_data(data){}

    friend class list<Type>;
};

template <typename Type> class list
{
    private:
       list_node_n<Type> *list_l;
       int count;
    public:
        list();
        ~list();
        bool add_head(list_node_n<Type> *new_node);
        bool add_tail(list_node_n<Type> *new_node);
        bool remove_head();
        bool remove_tail();
        bool remove_key(list_node_n<Type> *new_node);
        int show_list();
        int purge_list();
};

template<typename Type> list<Type>::list()
{
}

template<typename Type> list<Type>::~list()
{
}

template<typename Type> bool list<Type>::add_head(list_node_n<Type> *new_node)
{
    new_node->m_next = list_l;
    list_l = new_node;
    return true;
}

template<typename Type> bool list<Type>::add_tail(list_node_n<Type> *new_node)
{
    new_node->m_next = NULL;
    list_node_n<Type> *current = list_l;

    while(current->m_next!=NULL)
    {
        current = current->m_next;
    }
    return true;
    
}

template<typename Type> int list<Type>::show_list()
{
    list_node_n<Type> *current=NULL;

    current = list_l;
    if (current==NULL)
    {
        std::cout<<"list is empty!"<<"\n";
        return -1;
    }
    while (current!=NULL)
    {
        std::cout<<"element: "<<current->m_data<<"\n";
        current=current->m_next;
    }

    return 1;
}

template<typename Type> int list<Type>::purge_list()
{
    list_node_n<Type> *current=NULL;

    current = list_l;
    if (current==NULL)
    {
        return -1;
    }
    while (current!=NULL)
    {
        current = list_l->m_next;
        delete list_l;
        list_l = current;
    }
    list_l = NULL;

    return 1;
}

