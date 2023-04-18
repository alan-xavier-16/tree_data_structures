#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>
#include <iostream>

class Node
{
private:
  int _data;
  Node *_left = NULL;  // Point to LEFT SUBTREE, Default is NULL
  Node *_right = NULL; // Point to RIGHT SUBTREE, Default is NULL

public:
  // Default Constructor
  Node(int data);

  // Preorder
  void preorderTraversal(Node *node);

  // Postorder
  void postorderTraversal(Node *node);

  // Inorder
  void inorderTraversal(Node *node);

  // Default Destructor
  ~Node();
};

#endif // NODE_H