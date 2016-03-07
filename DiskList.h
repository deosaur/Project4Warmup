
#ifndef DiskList_h
#define DiskList_h

#include "BinaryFile.h"
#include <cstring>

using namespace std;

class DiskList
{
public:
    DiskList(const std::string& filename) {
        Node* newNode = new Node;
        if(!newNode->bf.openExisting(filename)) {
            newNode->bf.createNew(filename);
        }
        m_head = newNode;
    }
    
    bool push_front(const char* data) {
        // if the c string has at least 256 non-zero byte characters, return false without touching anything
        unsigned long size = strlen(data);
        if(size >= 256)
            return false;
        
        Node* addNode = new Node;
        addNode->m_next = m_head;
        m_head = addNode;
        
        
        // otherwise add a new node with a copy of the C string (including a zero byte) to the front of the list, return true
        addNode->bf.write(data, size, 0); // check if this writes zero byte!
        return true;
    }
    
    bool remove(const char* data) {
        // check if node is equal to data, if so remove and keep checking for repeats, after done return true
        // KEEP EVERYTHING IN SAME ORDER AS BEFORE IF REMOVED
        bool removed = 0;
        
        /*for(int i = 0; i < bf.fileLength(); i++) {
            if() { // there is an object that matches data inside the file
                removed = 1;
            }
        }*/
        
        if(removed)
            return true;
        return false;
    }
    
    void printAll() {
        Node* temp = m_head;
        
        while(temp != nullptr) {
            cout << "node read " << endl; // PLACEHOLDER CODE, FIND OUT HOW TO BRING OUT DATA
        }
    }
    
private:
    
    struct Node {
        BinaryFile bf;
        Node* m_next;
    };
    
    Node* m_head;
    // maybe other simple members
};


#endif /* DiskList_h */
