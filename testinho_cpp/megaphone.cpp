#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);
        for (char &c : arg) {
            c = std::toupper(c);
        }
        std::cout << arg;
    }
    std::cout << std::endl;

    return 0;
}
