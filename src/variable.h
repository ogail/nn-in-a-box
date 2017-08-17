
#ifndef VARIABLE_H
#define VARIABLE_H

#include "layer_init.h"

namespace nnbox {
    class variable {
    public:
        variable(int dimension1, int dimension2, layer_init init): variable(dimension1, init) {
            this->dimension2 = dimension2;
        }

        variable(int dimension1, layer_init init) : dimension1(dimension1), l_init(init) { }
        

    private:
        int dimension1;
        int dimension2;
        layer_init l_init;
    };
}

#endif /* end of include guard: VARIABLE_H */