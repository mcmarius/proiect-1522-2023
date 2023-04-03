#include <iostream>
#include <vector>
#include "Haina.h"




int main() {
    Haina h1{"a", 1};
    Cuier c1{"test", {h1}};
    std::vector<Cuier> vec;
    vec.push_back(c1);
    std::string culoare;
    std::cin >> culoare;
    std::cout << "am citit " << culoare << "\n";
    return 0;
}
