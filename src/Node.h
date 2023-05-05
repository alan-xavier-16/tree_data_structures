#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>
#include <iostream>

class Node
{
private:
  int _key;
  Node *_left = NULL;  // Point to LEFT SUBTREE, Default is NULL
  Node *_right = NULL; // Point to RIGHT SUBTREE, Default is NULL
  int _height = 1;

public:
  // Default Constructor
  Node(int key);

  // Get key
  int getKey();

  // Print left && right nodes
  Node *getLeft();
  Node *getRight();

  // Update left && right nodes
  void addLeft(Node *l);
  void addRight(Node *r);

  // Get Height
  int getHeight();

  // Update Height
  void updateHeight(int h);

  // Preorder
  static void preorderTraversal(Node *node);

  // Postorder
  static void postorderTraversal(Node *node);

  // Inorder
  static void inorderTraversal(Node *node);

  // Default Destructor
  ~Node();
};

#endif // NODE_H