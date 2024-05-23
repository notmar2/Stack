#ifndef STACK_H
#define STACK_H

#include "DLList.h"

template<typename T>
class Stack : private DLList<T>{ // herencia privada para esconder los métodos que no queremos que la pila pueda usar como push_front y demás

    typedef typename DLList<T>::iterator iterator; // typedef porque los programadores no escriben dos veces

public:
    /*
        de cppreference.com, los metodos de un stack son:

        (constructor) constructs the stack
        (destructor) destructs the stack
        operator= assigns values to the container adaptor

        Element access
        top accesses the top element

        Capacity
        empty checks whether the container adaptor is empty
        size returns the number of elements

        Modifiers
        push inserts element at the top
        push_range inserts a range of elements at the top
        emplace constructs element in-place at the top
        pop removes the top element
        swap swaps the contents

        se implementarán todos excepto push_range, y emplace porque están fuera del scope de la actividad
        y el operador de asignación o swap ya que no hay métodos de edición en DLList
     * */

    Stack(): s(0){}
    ~Stack(){
        this->clear();
    }

    iterator top(){
        return this->end();
    }

    bool empty(){
        return s == 0;
    }

    int size(){
        return s;
    }

    void push(const T& data) {
        this->push_back(data);
        s++;
    }

    void pop() {
        this->pop_back();
        s--;
    }

    void print() {
        this->DLList<T>::print();
    }

private:
    int s; // size
};

#endif //STACK_H