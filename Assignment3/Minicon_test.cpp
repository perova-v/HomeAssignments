/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
 */

#include <gtest/gtest.h>
#include "Minicon.h"

TEST(MiniconTest, CheckHide)
{
    Minicon mini("Fixit", 1, 10, nullptr, true);
    EXPECT_TRUE(mini.getHidden());
}
