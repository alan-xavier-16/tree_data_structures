#include "Node.h"

Node::Node(int data) : _data(data) {}

// Preorder
void Node::preorderTraversal(Node *node)
{
  // No other subtrees to traverse
  if (node == NULL)
    return;

  // Print root
  std::cout << node->_data << "->";

  // Visit left and right subtrees
  preorderTraversal(node->_left);
  preorderTraversal(node->_right);
}

// Postorder
void Node::postorderTraversal(Node *node)
{
  // No other subtrees to traverse
  if (node == NULL)
    return;

  // Visit left and right subtrees
  postorderTraversal(node->_left);
  postorderTraversal(node->_right);

  // Print root
  std::cout << node->_data << "->";
}

// Inorder
void Node::inorderTraversal(Node *node)
{
  // No other subtrees to traverse
  if (node == NULL)
    return;

  // Visit left subtrees
  inorderTraversal(node->_left);

  // Print root
  std::cout << node->_data << "->";

  // Visit right subtrees
  inorderTraversal(node->_right);
}

// Default Destructor
Node::~Node() {}