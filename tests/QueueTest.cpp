#include <gtest/gtest.h>
#include "Queue.h"

TEST(QueueTest, PushInterfaceCanBeCalled) {
    Queue queue;
    EXPECT_NO_THROW(queue.push(10));
}

TEST(QueueTest, PopInterfaceReturnsInteger) {
    Queue queue;
    EXPECT_EQ(queue.pop(), 0);
}
