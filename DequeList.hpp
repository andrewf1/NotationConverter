#ifndef DEQUELIST_HPP
#define DEQUELIST_HPP

class DequeListNode {
public:
    DequeListNode() = default;
    ~DequeListNode() = default;
private:
    char part;
    DequeListNode* prev;
    DequeListNode* next;
friend class DequeList;
};

class DequeList {
public:
    DequeList();
    ~DequeList();
    char front() const { return header->next->part; }
    char back() const { return trailer->prev->part; }
    void emptyAdd(DequeListNode* new_part); //Helper function to add a new element to an empty list
    void addFront(const char& part);
    void addBack(const char& part);
    void removeFront();
    void removeBack();
    bool emptyList() { return (header->next == trailer); }
private:
    unsigned int size;
    DequeListNode* header;
    DequeListNode* trailer;
};

#endif /* DEQUELIST_HPP */