#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac < 2) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    for (int argIndex = 1; argIndex < ac; argIndex++) {
        int i = 0;

        while (av[argIndex][i] != '\0') {
            std::cout << static_cast<char>(toupper(av[argIndex][i]));
            i++;
        }
        std::cout << " ";
    }
    std::cout << std::endl;

    return(0);
}
