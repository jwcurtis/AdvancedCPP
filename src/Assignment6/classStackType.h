template <class Type>

class stackType: public stackADT<Type>
{
    public:

        const stackType<Type>& operator=(const stackType<Type>&);
        void initializeStack();
        bool isEmptyStack() const;
        bool isFullStack() const;
        void push(const Type& neItem);
        Type top() const;
        void pop();

        stackType(int stackSize = 100);
        steakType(const stackType<Type>& otherStack);
        ~stackType();

    private:
        int maxStackSize;
        int stackTop;
        Type *list;

        void copyStack(const stackType<Type>& otherStack);
};