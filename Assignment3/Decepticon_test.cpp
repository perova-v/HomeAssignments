/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
 */

#include <gtest/gtest.h>
#include "Decepticon.h"

TEST(DecepticonTest, CheckDanger) {
    Decepticon megatron("Megatron", 10, 100, nullptr, 9000);
    EXPECT_EQ(megatron.getDangerLevel(), 9000);
    EXPECT_TRUE(megatron.fly());
}

TEST(DecepticonTest, Flight) {
    Decepticon starscream("Starscream", 5, 50, nullptr, 100);
    EXPECT_TRUE(starscream.fly());
}
