#include "iostream"
#include "BinaryTree.hpp"

using namespace std;

int main()
{
    BinaryTree* theTree = new BinaryTree(3);
    theTree->add(3);
    theTree->add(2);
    theTree->add(5);
    theTree->add(7);
    theTree->add(13);
    theTree->add(90);
    theTree->add(17);
    theTree->add(111);
    theTree->displayInOrder();
    cout << "finish" << "\n";
    theTree->displayPreOrder();
    cout << "finish" << "\n";
    theTree->displayPostOrder();
    cout << "finish" << "\n";
}