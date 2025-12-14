/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
 */

#include <gtest/gtest.h>
#include "Minicon.h"

TEST(MiniconTest, CheckHide) {
    Minicon mini("Fixit", 1, 10, nullptr, false);
    EXPECT_TRUE(mini.hide());
}

TEST(MiniconTest, InheritanceCheck) {
    Minicon mini("Wheelie", 5, 20, nullptr, true);

    EXPECT_EQ(mini.getLevel(), 5);
    EXPECT_EQ(mini.getName(), "Wheelie");

    EXPECT_EQ(mini.getFuel(), 20);
}
