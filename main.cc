
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

    std::cout << ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ sizeof func << std::endl;
    std::cout << *&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*& message << std::endl;

    std::cout << *std::string(message).c_str() << std::endl;

    std::cout << * (1 + reinterpret_cast<int *>(& func)) << std::endl;

    return 0;
}

