#include <gtest/gtest.h>
#include "BinaryTree.h"

TEST(BinaryTreeTest, PushInterfaceCanBeCalled) {
    BinaryTree tree;
    EXPECT_NO_THROW(tree.push(10));
}

TEST(BinaryTreeTest, PopInterfaceReturnsInteger) {
    BinaryTree tree;
    EXPECT_EQ(tree.pop(), 0);
}

TEST(BinaryTreeTest, SearchInterfaceReturnsBoolean) {
    BinaryTree tree;
    EXPECT_FALSE(tree.search(10));
}
