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

