#ifndef VLIST_H
#define VLIST_H
#include <iostream>
using namespace std;

class Dstack {
    private:
        class Node {
        public:
            double m_data;
            Node* m_next;
            Node(double data, Node* next) 
            {
            m_data = data;
            m_next = next;
            }
            ~Node();
        };
        Node* m_head;
    public:
        Dstack()
        {
            m_head = nullptr;
        }
        void push(double value);
        bool pop(double &value);
        int size();
        bool empty();

        ~Dstack(); 

};
#endif