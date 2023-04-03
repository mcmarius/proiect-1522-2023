//
// Created by marius on 03.04.2023.
//

#ifndef OOP_CUIER_H
#define OOP_CUIER_H


#include <vector>
#include <ostream>
#include "Haina.h"

class Cuier {
//    int nr_haine_max;
//    Haina h{"a", 1};
    std::string material;
    std::vector<Haina> haine;
public:
    Cuier(const std::string &material, const std::vector<Haina> &haine);

//    Cuier(const std::string &material, const std::vector<Haina> &haine) : material(material), haine(haine) {}
    friend std::ostream &operator<<(std::ostream &os, const Cuier &cuier);
};


#endif //OOP_CUIER_H
