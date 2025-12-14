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
