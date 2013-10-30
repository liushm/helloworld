
#include <iostream>

int main(int argc, char *argv[]) {
    auto message = "Hello, world!!";
    auto func = [=]() {
        std::cout << message << std::endl;
    };

    func();

    return 0;
}

