/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 4
 */

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Weapon.h"

TEST(TransformerTest, Initialization)
{
    Weapon gun("Gun", 10);

    Autobot bot("Bot", 1, 100, &gun, "Test");

    EXPECT_EQ(bot.getName(), "Bot");
    EXPECT_EQ(bot.getEnginePower(), 1000);
}

TEST(TransformerTest, Actions)
{

    Autobot bot("Bot", 1, 1, nullptr, "Test");

    EXPECT_TRUE(bot.move());
    EXPECT_EQ(bot.getFuel(), 0);
    EXPECT_FALSE(bot.move());
}
