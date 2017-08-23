
#include <gtest/gtest.h>
#include <iostream>
#include "basic_math.h"

using namespace std;
using namespace Eigen;

TEST(BasicMath, basic_sigmoid)
{
    double r = basic_sigmoid(3);
    ASSERT_EQ(0.9525741268224334, r);
}

TEST(BasicMath, matrix)
{
    MatrixXd m(1, 3);
    MatrixXd e(1, 3);
    MatrixXd a(1, 3);
    m << 1, 2, 3;

    e << 0.73105858, 0.88079708, 0.95257413;
    a = m.unaryExpr(&basic_sigmoid);
    ASSERT_TRUE((e - a).norm() < 1e-6 );

    e << 0.19661193, 0.10499359, 0.04517666;
    a = m.unaryExpr(&basic_sigmoid_derivative);
    ASSERT_TRUE((e - a).norm() < 1e-6 );

    e << 2.71828183, 7.3890561, 20.08553692;
    a = m.array().exp();
    ASSERT_TRUE((e - a).norm() < 1e-6 );

    MatrixXd t(1, 3);
    t.fill(3);
    e << 4, 5, 6;
    a = m + t;
    ASSERT_TRUE((e - a).norm() < 1e-6 );
}