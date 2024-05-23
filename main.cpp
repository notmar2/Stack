#include "Stack.h"

int main() {
    Stack<int> s;

    for (int i = 0; i < 15; ++i) {
        s.push(i);
    }

    s.print();

    s.pop();

    std::cout << "------------------" << std::endl;

    s.print();

    std::cout << "------------------" << std::endl;

    std::cout << *s.top() << std::endl;
    std::cout << s.size() << std::endl;

    if (s.empty()){

    }

    return 0;
}
