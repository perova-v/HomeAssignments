/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 5
 */

#include <gtest/gtest.h>
#include "Matrix.h"
#include "Rational.h"

TEST(MatrixInt, BasicOperations)
{
    Matrix<int> m1(2, 2);
    m1.at(0,0) = 1;
    m1.at(0,1) = 2;
    m1.at(1,0) = 3;
    m1.at(1,1) = 4;

    Matrix<int> m2 = m1 * 2;
    EXPECT_EQ(m2.at(0,0), 2);
    EXPECT_EQ(m2.at(1,1), 8);

    Matrix<int> m3 = m1 + m1;
    EXPECT_EQ(m3.at(0,1), 4);
}

TEST(MatrixInt, Multiplication)
{
    Matrix<int> a(1, 2);
    a.at(0,0) = 1;
    a.at(0,1) = 2;

    Matrix<int> b(2, 1);
    b.at(0,0) = 3;
    b.at(1,0) = 4;

    Matrix<int> res = a * b;
    EXPECT_EQ(res.getRows(), 1);
    EXPECT_EQ(res.getCols(), 1);
    EXPECT_EQ(res.at(0,0), 11);
}

TEST(MatrixDouble, Transpose)
{
    Matrix<double> m(2, 1);
    m.at(0,0) = 1.5;
    m.at(1,0) = 2.5;

    Matrix<double> t = m.transpose();
    EXPECT_EQ(t.getRows(), 1);
    EXPECT_EQ(t.getCols(), 2);
    EXPECT_DOUBLE_EQ(t.at(0,0), 1.5);
    EXPECT_DOUBLE_EQ(t.at(0,1), 2.5);
}

TEST(MatrixRational, FullCheck)
{
    Matrix<Rational> m1(2, 2);

    m1.at(0,0) = Rational(1, 2);
    m1.at(0,1) = Rational(1, 2);
    m1.at(1,0) = Rational(1, 2);
    m1.at(1,1) = Rational(1, 2);

    Matrix<Rational> res = m1 * Rational(1, 2);

    EXPECT_EQ(res.at(0,0), Rational(1, 4));
    EXPECT_EQ(res.at(1,1), Rational(1, 4));
}


TEST(MatrixError, Dimensions)
{
    Matrix<int> a(2, 2);
    Matrix<int> b(3, 3);
    EXPECT_THROW(a + b, std::invalid_argument);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
