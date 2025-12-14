/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
 */

#include <gtest/gtest.h>
#include "Autobot.h"

TEST(AutobotTest, CheckRole) {
    Autobot bot("Bee", 5, 50, nullptr, "Scout");
    EXPECT_EQ(bot.getRole(), "Scout");
}

TEST(AutobotTest, Transformation) {
    Autobot bot("Prime", 10, 100, nullptr, "Leader");
    EXPECT_TRUE(bot.transform());
}
