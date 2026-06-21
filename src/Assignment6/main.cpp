#include <iostream>
#include "classStackType.h"

void testCopyConstructor(stackType<int> otherStack);

int main(){

    stackType<int> stack(50);
    stackType<int> cpyStack(50);
    stackType<int> dummyStack(100);

    stack.initializeStack();
    stack.push(85);
    stack.push(25);
    stack.push(56);
    cpyStack = stack;

    cout << "cpyStack: " << cpyStack << endl;

    cpyStack = stack;
    testCopyConstructor(stack);

    if(!stack.isEmptyStack()){
        cout << "The original stack is not empty." << endl 
            << "The top element of the original stack: " 
            << cpyStack.top() << endl;
    }

    dummyStack = stack;
    cout << "Dummystack: " <<dummyStack << endl;

    return 0;
}

void testCopyConstructor(stackType<int> otherStack){
    if (!otherStack.isEmptyStack()){
        cout<< "otherStack is not empty." << endl  
            << "The top element of otherStack: "
            << otherStack.top() << endl;
    }
}