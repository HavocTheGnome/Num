#include "iostream"
#include "BinaryTree.hpp"
using namespace std;

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this->rightChild = 0;
}

void BinaryTree::displayInOrder()
{
    if(!this->leftChild)
    {
        if(!this->rightChild)
        {
            cout << this->payload << "\n";
        }
        else
        {
            cout << this->payload << "\n";
            this->rightChild->displayInOrder();
        }
    }
    else
    {
        if(!this->rightChild)
        {
            this->leftChild->displayInOrder();
            cout << this->payload << "\n";
        }
        else
        {
            this->leftChild->displayInOrder();
            cout << this->payload << "\n";
            this->rightChild->displayInOrder();
        }
    }
}

void BinaryTree::displayPreOrder()
{
    if(!this->leftChild)
    {
        if(!this->rightChild)
        {
            cout << this->payload << "\n";
        }
        else
        {
            cout << this->payload << "\n";
            this->rightChild->displayPreOrder();
        }
    }
    else
    {
        if(!this->rightChild)
        {
            cout << this->payload << "\n";
            this->leftChild->displayPreOrder();
        }
        else
        {
            cout << this->payload << "\n";
            this->leftChild->displayPreOrder();
            this->rightChild->displayPreOrder();
        }
    }
}

void BinaryTree::displayPostOrder()
{
    if(!this->leftChild)
    {
        if(!this->rightChild)
        {
            cout << this->payload << "\n";
        }
        else
        {
            this->rightChild->displayPostOrder();
            cout << this->payload << "\n";
        }
    }
    else
    {
        if(!this->rightChild)
        {
            this->leftChild->displayPostOrder();
            cout << this->payload << "\n";
        }
        else
        {
            this->leftChild->displayPostOrder();
            this->rightChild->displayPostOrder();
            cout << this->payload << "\n";
        }
    }
}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
            
        }
        else
        {
            this->rightChild->add(payload);
        }
    }
}