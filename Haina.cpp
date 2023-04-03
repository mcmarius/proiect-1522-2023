//
// Created by marius on 03.04.2023.
//

#include <iostream>
#include "Haina.h"

Haina::Haina(const std::string &culoare, int pret) : culoare(culoare), pret(pret) {}

Haina::Haina(const Haina &other) : culoare(other.culoare), pret(other.pret) {
    std::cout << "cc haina\n";
}

Haina &Haina::operator=(const Haina &other) {
    culoare = other.culoare;
    pret = other.pret;
    std::cout << "op= haina\n";
    return *this;
}

Haina::~Haina() { std::cout << "destr haina\n"; }

std::ostream &operator<<(std::ostream &os, const Haina &haina) {
    os << "culoare: " << haina.culoare << " pret: " << haina.pret << "\n";
    return os;
}
