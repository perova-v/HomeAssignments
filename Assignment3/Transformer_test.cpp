/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
 */

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"

TEST(TransformerTest, CheckInitialization) {
    Weapon gun("Gun", 10);
    Transformer bot("Bot", 1, 100, &gun);
    EXPECT_EQ(bot.getName(), "Bot");
    EXPECT_EQ(bot.getEnginePower(), 1000);
}

TEST(TransformerTest, CheckMove) {
    Transformer bot("Bot", 1, 1, nullptr);
    EXPECT_TRUE(bot.move());
    EXPECT_EQ(bot.getFuel(), 0);
    EXPECT_FALSE(bot.move());
}
