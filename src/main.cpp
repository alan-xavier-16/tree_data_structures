#include "Node.h"

int main()
{
  /* ----------------------------- Tree Traversal ----------------------------- */
  /*
      1
     / \
    12  9
    /\  /\
   5 n  n 6
  */
  std::cout << "Testing Tree Traversal" << std::endl;
  Node *root = new Node(1);
  root->addLeft(new Node(12));
  root->addRight(new Node(9));
  root->getLeft()->addLeft(new Node(5));
  root->getRight()->addRight(new Node(6));

  std::cout << "Inorder traversal" << std::endl;
  Node::inorderTraversal(root);

  std::cout << "\nPreorder traversal" << std::endl;
  Node::preorderTraversal(root);

  std::cout << "\nPostoder traversal" << std::endl;
  Node::postorderTraversal(root);

  delete root;
}