#include <iostream>

class Node {
public:
    virtual ~Node () {};
    virtual void setVal(int data) = 0;
    virtual int getVal() = 0;
    virtual void printVal() = 0;
    virtual void setNext(Node *next) = 0;
    virtual Node *getNext() = 0;
    virtual void setPrev(Node *prev) {};
    virtual Node *getPrev() {return NULL;};
};

class SingleListNode: public Node {
public:
    SingleListNode(int data, Node *next=NULL): _data(data), 
                                               _next(next) {}
    ~SingleListNode() {
        delete _next;
    }
    void setVal(int data) override;
    int getVal() override;
    void printVal() override;
    void setNext(Node *next) override;
    Node *getNext() override;
private:
    int _data;
    Node *_next;
};

class DoubleListNode: public Node {
public:
    DoubleListNode(int data, Node *next=NULL, Node *prev=NULL): _data(data), 
                                                                _next(next), 
                                                                _prev(prev) {}
    ~DoubleListNode() {
        delete _next;
        delete _prev;
    }
    void setVal(int data) override;
    int getVal() override;
    void printVal() override;
    void setNext(Node *next) override;
    Node *getNext() override;
    void setPrev(Node *prev) override;
    Node *getPrev() override;
private:
    int _data;
    Node *_next;
    Node *_prev;
};