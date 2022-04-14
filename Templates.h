//#ifndef __STANDARD_TEMPLATES__
//#define __STANDARD_TEMPLATES__
#pragma once
#include <vector>


template<typename Type> class Stack
{
    public:
        Stack();
        bool is_full();
        bool is_empty();
        bool push(const Type &item);
        bool pop(Type &item);
        bool empty();
        int get_stack_depth();
        ~Stack();
    private:
        int top;
        enum {max=10};
        Type items[max];
};

template<typename Type> Stack<Type>::Stack()
{
    top = 0;
}

template<typename Type> bool Stack<Type>::is_full()
{
    return top==max;
}

template<typename Type> bool Stack<Type>::is_empty()
{
    return top==0;
}

template<typename Type> bool Stack<Type>::empty()
{
    top = 0;
    return true;
}

template<typename Type> bool Stack<Type>::push(const Type &item)
{
    if (!is_full())
    {
        items[top++] = item;
        return true;
    }
    return false;
}

template<typename Type> bool Stack<Type>::pop(Type &item)
{
    if (!is_empty())
    {
        item = items[--top]; 
        return true;
    }
    return false;
}

template<typename Type> int Stack<Type>::get_stack_depth()
{
    return top;
}

template<typename Type> Stack<Type>::~Stack()
{
}


template<typename TKey, typename TValue> class Dictionary
{

};


template <typename Type> class SingleLinkedList
{
    private:
        SingleLinkedList *head;

    public:

};


//#endif
