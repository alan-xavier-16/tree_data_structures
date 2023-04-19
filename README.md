# Data Structures

A **data structure** is a container used to store and organize data. They are used to arrange data on a computer for efficient access and updates. We previously introduced the basic concepts and types of data structures, as well as our implementations in C++ of common linear data structures, such as a **Stack**, a **Queue**, a **Circular Queue**, a **Linked List** and a **Hash Table**. Please refer to the repo [linear_data_structures](https://github.com/alan-xavier-16/linear_data_structures) for details.

In this repo, we will implement the **Tree** data structures.

## Tree Data Structures

A tree is a `nonlinear` hierarchical data structure that consists of **nodes** connected by **edges**.

Other data structures, such as arrays, linked lists, stacks, and queues are `linear` data structures that store data **sequentially**. The time complexity for any operations performed on a linear data structure increases with the increase in the data size stored by these structures.

Tree data structures allow for quicker and easier access to the data is not in any sequence, but arranged in a hierarchical manner, where one element is connected to one or more elements.

## Tree Terminologies

1. `Node`:
   - A node is an entity that contains a **key or value** and **pointers** to its child nodes.
   - The **last** nodes of each path are called **leaf nodes** that do not point to child nodes.
   - The node having at least a child node is called an **internal** node.
2. `Edge`: The link between any two nodes.
3. `Root`: The topmost node of a tree.
4. `Height of a Node`: The number of edges from the node to the deepest leaf (i.e. the longest path from the node to a leaf node).
5. `Depth of a Node`: The number of edges from the root to the node.
6. `Height of a Tree`: The height of the root node or the depth of the deepest node.
7. `Degree of a Node`: The total number of branches of that node.
8. `Forest`: A collection of disjoint trees.

## Tree Traversal

Traversing a tree means visiting every node in the tree. For example, to add all the values in the tree or to find the largest node requires visiting each node of the tree.

Linear data structures, like arrays, stacks, queues, and linked lists have only **one** way to read the data. Hierarchical data structure such as trees, however, can be traversed in different ways.

We use traversal methods that take into account the **basic structure of a tree**. A node of a tree may be represented as a `struct` in C++, i.e.

```C++
struct node {
    int data;
    struct node* left;
    struct node* right;
}
```

The `struct node` pointed to by **left and right pointers** may lead to other `struct nodes` with **left and right children (pointers)**, so these nodes can be thought of as sub-trees instead of sub-nodes.

Every tree is thus a combination of:

- A node carrying **data**
- **Two subtrees**

To visit each node, we need to visit all the nodes in the left subtree, visit the root node and visit all the nodes in the right subtree. Depending on the order in which we do this, there can be three types of traversal.

### Inorder traversal

1. Visit all the nodes in the left subtree,
2. Visit the root node,
3. Visit all the nodes in the right subtree.

### Preorder traversal

1. Visit root node,
2. Visit all the nodes in the left subtree,
3. Visit all the nodes in the right subtree.

### Postorder traversal

1. Visit all the nodes in the left subtree,
2. Visit all the nodes in the right subtree,
3. Visit the root node.

## Binary Tree

A binary tree is a tree data structure where each parent node can have at most two child nodes. Each node of a binary tree consists of three items:

- Its data,
- Address of left child,
- Address of right child.

### Types of Binary Tree

1. `Full Binary Tree`: A binary tree where every node has either two or no children.

| ![Full Binary Tree](/assets/Full%20Binary%20Tree.png) |
| ----------------------------------------------------- |

2. `Perfect Binary Tree`: A binary tree where every internal node has exactly two child nodes and all the leaf nodes are at the same level.

| ![Perfect Binary Tree](/assets/Perfect%20Binary%20Tree.png) |
| ----------------------------------------------------- |

3. `Complete Binary Tree`: A binary tree where all the levels are completely **full**, except possibly the deepest level, which can have nodes that have either one left child or can be completely full.

| ![Complete Binary Tree](/assets/Complete%20Binary%20Tree.png) |
| ----------------------------------------------------- |

4. `Degenerate or Pathological Tree`: A tree having a single child either left or right.

| ![Degenerate Binary Tree](/assets/Degenerate%20Binary%20Tree.png) |
| ----------------------------------------------------- |

5. `Skewed Binary Tree`: A skewed binary tree is a pathological/degenerate tree where the tree is dominated by either left or right nodes. Thus, there are two types of skewed binary tree: **left-skewed** and **right-skewed** binary trees.

| ![Skeweed Binary Tree](/assets/Skeweed%20Binary%20Tree.png) |
| ----------------------------------------------------- |

6. `Balanced Binary Tree`: A binary tree where the difference between the height of the left and the right subtree for each node is either 0 or 1.

| ![Balanced Binary Tree](/assets/Balanced%20Binary%20Tree.png) |
| ----------------------------------------------------- |


## References
1. [Programiz Tree Data Structures](https://www.programiz.com/dsa/binary-tree)