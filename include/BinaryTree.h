#pragma once

class BinaryTree {
public:
    BinaryTree() = default;
    void push(int value);
    int pop();
    bool search(int value);
};
