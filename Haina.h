//
// Created by marius on 03.04.2023.
//

#ifndef OOP_HAINA_H
#define OOP_HAINA_H


class Haina {
    std::string culoare = "gri";
    int pret = 100;
public:
    Haina(const std::string &culoare, int pret);

    Haina(const Haina &other);

    Haina &operator=(const Haina &other);

    ~Haina();

    friend std::ostream &operator<<(std::ostream &os, const Haina &haina);
};


#endif //OOP_HAINA_H
