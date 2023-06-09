#include "Node.h"

Node::Node(int key) : _key(key) {}

// Get key
int Node::getKey()
{
  return this->_key;
}

// Print left && right nodes
Node *Node::getLeft()
{
  return this->_left;
}

Node *Node::getRight()
{
  return this->_right;
}

// Update left && right nodes
void Node::addLeft(Node *l)
{
  this->_left = l;
}

void Node::addRight(Node *r)
{
  this->_right = r;
}

// Get Height
int Node::getHeight()
{
  return this->_height;
}

// Update Height
void Node::updateHeight(int h)
{
  this->_height = h;
}

// Preorder
void Node::preorderTraversal(Node *node)
{
  // No other subtrees to traverse
  if (node == NULL)
    return;

  // Print root
  std::cout << node->_key << "->";

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
  std::cout << node->_key << "->";
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
  std::cout << node->_key << "->";

  // Visit right subtrees
  inorderTraversal(node->_right);
}

// Default Destructor
Node::~Node()
{
  delete this->_left;
  delete this->_right;
}