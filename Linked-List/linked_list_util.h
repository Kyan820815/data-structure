#include "linked_list.h"

//***********************************
//
//     Single Linked List Node
//
//***********************************

void SingleListNode::setVal(int data) {
    this->_data = data;
}

int SingleListNode::getVal() {
    return this->_data;
}

void SingleListNode::printVal() {
    std::cout << this->_data;
}

void SingleListNode::setNext(Node *next) {
    this->_next = next;
}

Node* SingleListNode::getNext() {
    return this->_next;
}

//***********************************
//
//     Double Linked List Node
//
//***********************************

void DoubleListNode::setVal(int data) {
    this->_data = data;
}

int DoubleListNode::getVal() {
    return this->_data;
}

void DoubleListNode::printVal() {
    std::cout << this->_data;
}

void DoubleListNode::setNext(Node *next) {
    this->_next = next;
}

void DoubleListNode::setPrev(Node *prev) {
    this->_prev = prev;
}

Node* DoubleListNode::getNext() {
    return this->_next;
}

Node* DoubleListNode::getPrev() {
    return this->_prev;
}
