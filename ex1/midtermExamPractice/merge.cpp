#include <iostream>
using namespace std;

class LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = nullptr;
        }
    };
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insert(int x)
    {
        Node *newNode = new Node(x);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
               while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    LinkedList merge(LinkedList &List1, LinkedList &List2)
    {
        // TO DO
        Node *current1 = List1.head;
        Node *current2 = List2.head;
        LinkedList mergedList;
        while (current1->next != nullptr && current2->next != nullptr)
        {
            if (current1->data < current2->data)
            {
                mergedList.insert(current1->data);
                current1 = current1->next;
            }
            else if (current1->data > current2->data)
            {
                mergedList.insert(current2->data);
                current1 = current1->next;
            }
            else
            {
                mergedList.insert(current1->data);
                mergedList.insert(current1->data); 
                current1 = current1->next;
                current2 = current2->next;
            }
        }
        while (current1 != nullptr)
        {
            mergedList.insert(current1->data);
            current1 = current1->next;
        }
        while (current2 != nullptr)
        {
            mergedList.insert(current2->data);
            current2 = current2->next;
        }
        return mergedList;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list1;
    list1.insert(1);
    list1.insert(1);
    list1.insert(1);
    list1.insert(7);
    LinkedList list2;
    list2.insert(2);
    list2.insert(4);
    list2.insert(6);
    list2.insert(8);

    LinkedList mergedList = mergedList.merge(list1, list2);

    cout << "Merged list: ";
    mergedList.printList();

    return 0;
}

/*#include <iostream>
using namespace std;

void alias(int &x, int &y)
{
    x = 50;
    y = 60;
}
int main(){
    //Demonstration of ALIASING!!
    int a = 20;
    int b = 25;
    cout << a << " " << b << endl;
    alias(a, b);
    cout << "After Aliasing : " << a << " " << b << endl;
    return 0;
}*/