#include <gtest/gtest.h>
#include "Heap.h"

TEST(HeapTest, PushInterfaceCanBeCalled) {
    Heap heap;
    EXPECT_NO_THROW(heap.push(10));
}

TEST(HeapTest, PopInterfaceReturnsInteger) {
    Heap heap;
    EXPECT_EQ(heap.pop(), 0);
}
