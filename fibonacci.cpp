#include <iostream>

int main()
{
    int attempts, t1 = 0, t2 = 1, nextTerm = 0;
    std::cout << "Enter attempts: ";
    std::cin >> attempts;

    std::cout << "Fibonacci sequence up to " << attempts << " terms: ";

    for (int o = 1; o <= attempts; ++o) {
        if (o == 1) {
            std::cout << t1 << ",";
            continue;
        }
        if (o == 2) {
            std::cout << t2 << ",";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        std::cout << nextTerm << ",";
    }
    return 0;
}

