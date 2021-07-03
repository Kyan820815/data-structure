#include <vector>
#include "linked_list_util.h"

//***********************************
//
//   General Linked List Function
//
//***********************************

void printLinkedList(Node *head) {
    while (head) {
        head->printVal();
        std::cout << " ";
        head = head->getNext();
    }
    std::cout << std::endl;
}

Node* findNode(int data, Node *cur) {
    while (cur) {
        if (cur->getVal() == data) {
            return cur;
        }
        cur = cur->getNext();
    }
    return cur;
}

int findLen(Node *cur) {
    int len = 0;
    
    while (cur) {
        cur = cur->getNext();
        ++len;
    }

    return len;
}

//***********************************
//
//     Single Linked List Node
//
//***********************************

Node* createSingleLinkedList(std::vector<int> &nums) {
    Node *dummy = new SingleListNode(-1);
    auto cur = dummy;

    for (auto &num: nums) {
        cur->setNext(new SingleListNode(num));
        cur = cur->getNext();
    }
    
    // reset head and free dummy
    Node *head = dummy->getNext();
    free(dummy);
    return head;
}

Node* insertBeforeSingleLinkedList(int data, Node *given, Node *head) {
    Node *dummy = new SingleListNode(-1);
    Node *insertNode = new SingleListNode(data);
    auto cur = head, prev = dummy;
    dummy->setNext(head);

    while (cur != given) {
        prev = cur;
        cur = cur->getNext();
    }
    
    // re-connecting
    prev->setNext(insertNode);
    insertNode->setNext(cur);
    
    // reset head and free dummy
    head = dummy->getNext();
    dummy->setNext(NULL);
    free(dummy);
    
    return head;
}

Node* insertAfterSingleLinkedList(int data, Node *given, Node *head) {
    if (!given) {
        // cannot insert node after null pointer
        return head;
    }
    
    Node *insertNode = new SingleListNode(data);
    auto cur = head;
    
    while (cur != given) {
        cur = cur->getNext();
    }
    
    // re-connecting
    auto tmp = cur->getNext();
    cur->setNext(insertNode);
    insertNode->setNext(tmp);
    
    return head;
}

Node* deleteBeforeSingleLinkedList(Node *given, Node *head) {
    if (given == head) {
        // cannot delete node before head node
        return head;
    }

    Node *dummy = new SingleListNode(-1);
    dummy->setNext(head);
    auto cur = head, prev = dummy;

    while (cur->getNext() != given) {
        prev = cur;
        cur = cur->getNext();
    }

    // re-connecting
    prev->setNext(cur->getNext());
    // free memeory of cur
    free(cur);

    // reset head and free dummy
    head = dummy->getNext();
    free(dummy);

    return head;
}

Node* deleteAfterSingleLinkedList(Node *given, Node *head) {
    if (!given) {
        // cannot delete node after null pointer
        return head;
    }

    auto cur = head;

    while (cur != given) {
        cur = cur->getNext();
    }

    // re-connecting
    auto deleteNode = cur->getNext();
    cur->setNext((cur->getNext())->getNext());
    // free memeory of delete node
    free(deleteNode);

    return head;
}

Node* deleteGivenSingleLinkedList(Node *given, Node *head) {
    if (!given) {
        // cannot delete null pointer
        return head;
    }

    Node *dummy = new SingleListNode(-1);
    dummy->setNext(head);
    auto cur = head, prev = dummy;

    while (cur != given) {
        prev = cur;
        cur = cur->getNext();
    }

    // re-connecting
    prev->setNext(cur->getNext());
    // free memeory of delete node
    free(cur);

    // reset head and free dummy
    head = dummy->getNext();
    free(dummy);

    return head;
}

//***********************************
//
//     Double Linked List Node
//
//***********************************

void createDoubleLinkedList(std::vector<int> &nums) {

}