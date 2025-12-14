/*
 * Perova Varvara
 * st141846@student.spbu.ru
 * My project number 3
 */

#include <gtest/gtest.h>
#include "Engine.h"

TEST(EngineTest, CheckPower) {
    Engine engine(500);
    EXPECT_EQ(engine.getPower(), 500);
}
