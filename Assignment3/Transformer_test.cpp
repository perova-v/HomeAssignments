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

TEST(TransformerTest, MoveConsumesFuel) {
    Transformer bot("Runner", 1, 10, nullptr);

    EXPECT_TRUE(bot.move());
    EXPECT_EQ(bot.getFuel(), 9);
}

TEST(TransformerTest, CannotMoveWithoutFuel) {
    Transformer bot("Lazy", 1, 0, nullptr);
    EXPECT_FALSE(bot.move());
    EXPECT_EQ(bot.getFuel(), 0);
}

TEST(TransformerTest, FireLogic) {
    Transformer bot("Pacifist", 1, 10, nullptr);
    EXPECT_FALSE(bot.fire());

    Weapon gun("Blaster", 50);
    bot.setWeapon(&gun);
    EXPECT_TRUE(bot.fire());
}


TEST(TransformerTest, FullActionCycle) {
    Transformer bot("Survivor", 1, 5, nullptr);

    EXPECT_FALSE(bot.fire());
    EXPECT_TRUE(bot.move());
    EXPECT_EQ(bot.getFuel(), 4);

    Weapon shotgun("Shotgun", 50);
    bot.setWeapon(&shotgun);
    EXPECT_TRUE(bot.fire());

    while(bot.move());
    EXPECT_EQ(bot.getFuel(), 0);
    EXPECT_FALSE(bot.move());
}
