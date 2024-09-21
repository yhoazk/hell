#include <iostream>
#include <vector>
#include <string>

int main (int c, char** v) {
    std::vector<std::string> args (v, v+c);
    std::cout << "Args: " << std::to_string(args.size()) << "\n";
    for (auto arg : args) {
        std::cout << "> " << arg << '\n';
    }
    std::cout << std::endl;
    return 0;
}