
#ifndef NONLINEAR_FUNC_H
#define NONLINEAR_FUNC_H

#include <string>

namespace nnbox {
    class nonlinear_func {
    public:
        nonlinear_func(std::string name) : name(name) {}
        std::string get_name() { return name; }
    private:
        std::string name;
    };
}

#endif /* end of include guard: NONLINEAR_FUNC_H */