//
// Created by marius on 03.04.2023.
//

#include "Cuier.h"

Cuier::Cuier(const std::string &material, const std::vector<Haina> &haine) : material(material), haine(haine) {}

std::ostream &operator<<(std::ostream &os, const Cuier &cuier) {
    os << "material: " << cuier.material << " haine:\n";
    for (const auto &haina: cuier.haine)
        os << "\t" << haina;
    return os;
}
