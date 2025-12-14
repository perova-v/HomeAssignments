/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
 */


#include <gtest/gtest.h>
#include "Weapon.h"

TEST(WeaponTest, CheckFields) {
    Weapon gun("Laser", 99);
    EXPECT_EQ(gun.getType(), "Laser");
    EXPECT_EQ(gun.getDamage(), 99);
}

TEST(WeaponTest, ZeroDamage) {
    Weapon stick("Stick", 0);
    EXPECT_EQ(stick.getDamage(), 0);
}

TEST(WeaponTest, EmptyName) {
    Weapon unknown("", 50);
    EXPECT_EQ(unknown.getType(), "");
}
