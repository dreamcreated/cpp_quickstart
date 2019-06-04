

class Foo {
public:
    Foo(const int &bar) : m_bar(bar){}
    const int &m_bar;
};


int main() {
    Foo foo(1);
    return 0;
}
