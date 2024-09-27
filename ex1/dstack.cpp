#include <iostream>
#include "dstack.h"
using namespace std;

void Dstack::push(double value)
{
    Node *newNode = new Node(value, nullptr);
    newNode->m_next = m_head;
    m_head = newNode;
    return;
}
bool Dstack::pop(double &value)
{
    
    if (m_head == nullptr)
    {
        return false;
    }
    else
    {
        Node *current = m_head;
        m_head = current->m_next;
        value = current->m_data;
        delete current;
        return true;
    }
}

int Dstack::size()
{
    Node *current = m_head;
    int count = 0;
    while (current != nullptr)
    {
        current = current->m_next;
        count++;
    }
    return count;
}

bool Dstack::empty()
{
    if (m_head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Dstack ::~Dstack()
{
    Node *current = m_head;
    while (current != nullptr)
    {
        Node *temp = current->m_next;
        delete current;
        current = temp;
    }
}
Dstack ::Node::~Node()
{
    
}