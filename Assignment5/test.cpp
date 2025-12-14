/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 5
 */

#include <gtest/gtest.h>
#include "Matrix.h"
#include "Rational.h"


TEST(RationalTest, ConstructorAndSimplify) {
    Rational r1(2, 4);
    EXPECT_EQ(r1.getNum(), 1);
    EXPECT_EQ(r1.getDenom(), 2);

    Rational r2(1, -2);
    EXPECT_EQ(r2.getNum(), -1);
    EXPECT_EQ(r2.getDenom(), 2);

    Rational r3(-2, -3);
    EXPECT_EQ(r3.getNum(), 2);
    EXPECT_EQ(r3.getDenom(), 3);

    Rational r4(0, 5);
    EXPECT_EQ(r4.getNum(), 0);
    EXPECT_EQ(r4.getDenom(), 1);
}

TEST(RationalTest, Arithmetic) {
    Rational a(1, 2);
    Rational b(1, 3);

    Rational sum = a + b;
    EXPECT_EQ(sum, Rational(5, 6));

    Rational sub = a - b;
    EXPECT_EQ(sub, Rational(1, 6));

    Rational c(2, 3);
    Rational mult = a * c;
    EXPECT_EQ(mult, Rational(1, 3));
}

TEST(RationalTest, Comparison) {
    Rational a(1, 2);
    Rational b(2, 4);
    Rational c(1, 3);

    EXPECT_TRUE(a == b);
    EXPECT_TRUE(a != c);
}

TEST(RationalTest, ZeroDenominatorException) {
    EXPECT_THROW(Rational(1, 0), std::invalid_argument);
}




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
