#include <iostream>


class Foo {
public:
    Foo(const int &bar) : m_bar(bar){}
    const int &m_bar;
    ~Foo() {
        std::cout << m_bar << std::endl;
    }
};

Foo* createFoo() {
    int i = 666;
    return new Foo(i);
}

void deleteFoo(Foo* foo) {
    delete foo;
}


int main() {
    Foo* foo = createFoo();
    deleteFoo(foo);
    return 0;
}
