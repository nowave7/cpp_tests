
template <typename Type> class List;

template <typename Type> class ListNode;

template <typename Type> class ListItr;

template <typename Type> class ListNode
{
    private:
        ListNode(const Type & element = Type(), ListNode *next=NULL):m_element(element), m_next(next){}
        Type m_element;
        ListNode *m_next;

        friend class List<Type>;
        friend class ListItr<Type>;
}


