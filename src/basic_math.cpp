#include <math.h>
#include "basic_math.h"

double basic_sigmoid(double x) {
    return 1/(1+exp(-x));
}

double basic_sigmoid_derivative(double x) {
    double s = basic_sigmoid(x);
    return s*(1-s);
}