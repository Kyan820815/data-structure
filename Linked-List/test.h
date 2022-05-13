#ifndef TEST_H
#define TEST_H

#include "util.h"

namespace test {

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

    // insert before at given position
    node = findNode(2, head);
    head = insertBeforeSingleLinkedList(100, node, head);
    // return {100, 1, 100, 2, 3, 4, 5}
    printLinkedList(head);

    // insert before end
    node = findNode(5, head);
    head = insertBeforeSingleLinkedList(100, node, head);
    // return {100, 1, 100, 2, 3, 4, 100, 5, 100}
    printLinkedList(head);


    // insert before nullptr
    node = nullptr;
    head = insertBeforeSingleLinkedList(100, node, head);
    // return {100, 1, 100, 2, 3, 4, 100, 5, 100}
    printLinkedList(head);

}

void testInsertAfter() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

    // insert after head
    node = findNode(1, head);
    head = insertAfterSingleLinkedList(100, node, head);
    // return {1, 100, 2, 3, 4, 5}
    printLinkedList(head);

    // insert after given position
    node = findNode(2, head);
    head = insertAfterSingleLinkedList(100, node, head);
    // return {1, 100, 2, 100, 3, 4, 5}
    printLinkedList(head);

    // insert after end 
    node = findNode(5, head);
    head = insertAfterSingleLinkedList(100, node, head);
    // return {1, 100, 2, 100, 3, 4, 5, 100}
    printLinkedList(head);

    // insert after nullptr
    node = nullptr;
    head = insertAfterSingleLinkedList(100, node, head);
    // return {1, 100, 2, 100, 3, 4, 5, 100}, same as original
    printLinkedList(head);
}

void testDeleteBefore() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

    // delete before head
    node = findNode(1, head);
    head = deleteBeforeSingleLinkedList(node, head);
    // return {1, 2, 3, 4, 5}, same as original
    printLinkedList(head);

    // delete before given position
    node = findNode(2, head);
    head = deleteBeforeSingleLinkedList(node, head);
    // return {2, 3, 4, 5}
    printLinkedList(head);

    // delete before end
    node = findNode(5, head);
    head = deleteBeforeSingleLinkedList(node, head);
    // return {2, 3, 5}
    printLinkedList(head);


    // delete before nullptr
    node = nullptr;
    head = deleteBeforeSingleLinkedList(nullptr, head);
    // return {2, 3}
    printLinkedList(head);
}

void testDeleteAfter() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

    // delete after head
    node = findNode(1, head);
    head = deleteAfterSingleLinkedList(node, head);
    // return {1, 3, 4, 5}
    printLinkedList(head);

    // delete after givin position
    node = findNode(3, head);
    head = deleteAfterSingleLinkedList(node, head);
    // return {1, 3, 5}
    printLinkedList(head);

    // delete after end
    node = findNode(5, head);
    head = deleteAfterSingleLinkedList(node, head);
    // return {1, 3, 5}, same as original
    printLinkedList(head);

    // delete after nullptr
    node = nullptr;
    head = deleteAfterSingleLinkedList(nullptr, head);
    // return {1, 3, 5}, same as original
    printLinkedList(head);

}

void testDeleteGiven() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto head = createSingleLinkedList(nums);
    // return {1, 2, 3, 4, 5}
    printLinkedList(head);

    Node *node;

    // delete at head
    node = findNode(1, head);
    head = deleteGivenSingleLinkedList(node, head);
    // return {2, 3, 4, 5}
    printLinkedList(head);

    // delete at given position
    node = findNode(3, head);
    head = deleteGivenSingleLinkedList(node, head);
    // return {2, 4, 5}
    printLinkedList(head);

    // delete at end
    node = findNode(5, head);
    head = deleteGivenSingleLinkedList(node, head);
    // return {2, 4}
    printLinkedList(head);

    // delete at nullptr
    node = nullptr;
    head = deleteGivenSingleLinkedList(node, head);
    // return {2, 4}, same as original
    printLinkedList(head);
}

void testFindLen() {
    std::vector<int> nums1 = {1, 2, 3, 4, 5}, nums2 = {};
    int len;

    auto head1 = createSingleLinkedList(nums1);
    len = findLen(head1);
    std::cout << len << std::endl;

    auto head2 = createSingleLinkedList(nums2);
    len = findLen(head2);
    std::cout << len << std::endl;
}

}

#endif