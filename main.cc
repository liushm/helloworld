
#include <iostream>

int main(int argc, char *argv[]) {
    auto message = "Hello, world!!";
    auto func = [=]() {
        std::cout << message << std::endl;
    };

    auto proc = [str = message] {
        std::cout << str << std::endl;
    };

    func();
    proc();

    return 0;
}

