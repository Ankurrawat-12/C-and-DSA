// Create a class called LIST with two pure virtual function store() and retrieve().To store a value call
// store and to retrieve call retrieve function. Derive two classes stack and queue from it and override store
// and retrieve.

#include <bits/stdc++.h>

using namespace std;

class LIST{
    public:
        virtual void store(int value) = 0;
        virtual int retreve() = 0;
};

class Stack: public LIST{
    stack<int> list;
    public:
        void store(int value);
        int retreve();
};

void Stack::store(int value){
    cout<<"Stored " + to_string(value) + " in Stack"<<endl;
    this->list.push(value);
}

int Stack::retreve(){
    int top = this->list.top();
    this->list.pop();
    cout<<"Retreved " + to_string(top) + " from Stack"<<endl;
    return top;
}

class Queue: public LIST{
    queue<int> list;
    public:
        void store(int value);
        int retreve();
};

void Queue::store(int value){
    cout<<"Stored " + to_string(value) + " in Queue"<<endl;
    this->list.push(value);
}

int Queue::retreve(){
    int top = this->list.front();
    this->list.pop();
    cout<<"Retreved " + to_string(top) + " from Queue"<<endl;
    return top;
}

int main(){
    Queue queue;
    queue.store(10);
    queue.store(12);
    queue.store(14);
    int retreved_queue_value = queue.retreve();
    Stack stack;
    stack.store(232);
    stack.store(125);
    stack.store(264);
    int retreved_stack_value = stack.retreve();

}