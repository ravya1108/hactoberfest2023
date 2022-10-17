//  check_foldable_tree.cpp: Rishabh Dev
//  Description: Check if a tree is foldable or not.
#include <iostream>
using namespace std;

class Node
{
private:
    int _data;
    Node *_left, *_right;
    void _mirror();
    bool _isStructureSame(Node *left, Node *right);

public:
    Node(/* args */);
    Node(int data)
    {
        _data = data;
        _left = NULL;
        _right = NULL;
    }
    void pushLeft(int data) { _left = new Node(data); }
    void pushRight(int data) { _right = new Node(data); }
    Node *left() { return _left; }
    Node *right() { return _right; }
    int peek() { return _data; }
    void inorder();
    bool isFoldable();
};

void Node::inorder()
{
    if (left() != NULL)
        left()->inorder();
    cout << _data << " ";
    if (right() != NULL)
        right()->inorder();
}

void Node::_mirror()
{
    if (!this)
        return;

    Node *temp;

    _left->_mirror();
    _right->_mirror();

    temp = _left;
    _left = _right;
    _right = temp;
}

bool Node::_isStructureSame(Node *left, Node *right)
{
    if (!left && !right)
        return true;

    if (left && right && this->_isStructureSame(left->_left, right->_left) && this->_isStructureSame(left->_right, right->_right))
        return true;

    return false;
}

bool Node::isFoldable()
{
    if (!this)
        return true;

    _left->_mirror();
    bool check = _isStructureSame(this->_left, this->_right);

    _left->_mirror();

    return check;
}

int main()
{
    Node *root = new Node(3);
    root->pushLeft(2);
    root->left()->pushLeft(5);
    root->pushRight(1);
    root->right()->pushLeft(8);
    root->inorder();
    cout << endl
         << (root->isFoldable() ? "FOLDABLE" : "NOT-FOLDABLE");
    return 0;
}