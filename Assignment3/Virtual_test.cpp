/*
* Perova Varvara
* st141846@student.spbu.ru
* My project number 4
*/

#include <gtest/gtest.h>
#include <vector>
#include <sstream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Minicon.h"

TEST(Assignment4, Constructors)
{
    Autobot a1;
    EXPECT_EQ(a1.getName(), "Transformer");

    Autobot a2("Optimus", 10, 100, nullptr, "Leader");
    EXPECT_EQ(a2.getName(), "Optimus");
}

TEST(Assignment4, Streams)
{
    Autobot a("Bee", 5, 50, nullptr, "Scout");
    std::stringstream ss;
    ss << a;
    EXPECT_FALSE(ss.str().empty());
}

TEST(Assignment4, VirtualCall)
{
    Autobot a;
    EXPECT_TRUE(a.transform());

    Decepticon d;
    EXPECT_TRUE(d.transform());
}

TEST(Assignment4, BasePointerCall)
{
    Autobot a;
    Transformer* ptr = &a;
    EXPECT_TRUE(ptr->transform());
    EXPECT_TRUE(ptr->ultimate());
}

TEST(Assignment4, VectorLoop)
{
    std::vector<Transformer*> bots;

    for(int i = 0; i < 3; ++i)
    {
        bots.push_back(new Autobot());
        bots.push_back(new Decepticon());
        bots.push_back(new Minicon());
    }

    for(size_t i = 0; i < bots.size(); ++i)
    {
        EXPECT_TRUE(bots[i]->transform());
        EXPECT_TRUE(bots[i]->fire());
        EXPECT_TRUE(bots[i]->ultimate());
    }

    for(size_t i = 0; i < bots.size(); ++i)
    {
        delete bots[i];
    }
}
