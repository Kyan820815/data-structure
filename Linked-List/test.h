#include "util.h"

void testInsertBefore() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

    // insert before head
    node = findNode(1, head);
    head = insertBeforeSingleLinkedList(100, node, head);
    // return {100, 1, 2, 3, 4, 5}
    printLinkedList(head);

    // insert at given position
    node = findNode(2, head);
    head = insertBeforeSingleLinkedList(100, node, head);
    // return {100, 1, 100, 2, 3, 4, 5}
    printLinkedList(head);

    // insert at last
    node = nullptr;
    head = insertBeforeSingleLinkedList(100, node, head);
    // we use -1 means NULL, return {100, 1, 100, 2, 3, 4, 5, 100}
    printLinkedList(head);
}

void testInsertAfter() {

}

void testDeleteBefore() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

}

void testDeleteAfter() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

}

void testDeleteGiven() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

}

void testFindLen() {

}