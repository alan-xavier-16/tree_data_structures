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

| ![Height and Depth of Tree](./assets/Height%20and%20Depth.png) |
| ----------------------------------------------------- |

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

### Full Binary Tree

A full binary tree is a binary tree where every internal node has either two or no children. It is also known as a `proper binary tree`.

| ![Full Binary Tree](./assets/Full%20Binary%20Tree.png) |
| ----------------------------------------------------- |

Let `i` be the number of `internal` nodes, `n` be the total number of `nodes`, `l` be the number of `leaves`, and `λ` be the number of `levels`. We can then determine:

- The **number of leaves** as `l = i + 1`.
- The **total number of nodes** as `n = 2i + 1`.
- The **number of internal nodes** as `i = (n – 1) / 2`.
- The **number of leaves** as `l = (n + 1) / 2`.
- The **total number of nodes** as `n = 2l – 1`.
- The **number of internal nodes** as `i = l – 1`.
- The **number of leaves** as at most `l = 2^(λ - 1)`.

### Perfect Binary Tree

A perfect binary tree is a binary tree where every internal node has exactly two children and all the leaf nodes are on the same level, i.e. all the internal nodes have a degree of 2.

| ![Perfect Binary Tree](./assets/Perfect%20Binary%20Tree.png) |
| ----------------------------------------------------- |

A perfect binary tree can be defined as:

- If a single node has no children, it is a perfect binary tree of height `h = 0`.
- If a node has `h > 0`, it is a perfect binary tree if both of its subtrees are of height `h - 1` and are non-overlapping.
- The **total number of nodes** is `n = 2^(h + 1) - 1`.
- The **number of leaves** is `l = 2^h`.
- The **number of internal nodes** is `i = 2^h - 1`.

### Complete Binary Tree

A complete binary tree is A binary tree where all the levels are completely full, except possibly the deepest level, which can have nodes that have either one left child or can be completely full.

It is similar to a full binary tree, except:

- All the leaves must lean towards the left.
- The last leaf may not have a right sibling, i.e. a complete binary tree doesn't have to be a full binary tree.

| ![Complete Binary Tree](./assets/Complete%20Binary%20Tree.png) |
| ----------------------------------------------------- |

#### Create a Complete Binary Tree

Given an array of six elements -> `1 | 2 | 3 | 4 | 5 | 6`,

- Select the **first** element to be the **root** node, no. of elements on level `λ-1 = 1`.
- Place the **second** element as a **left** child and the **third** element as the **right** child, no. of elements on level `λ-2 = 2`.
- Put the **next two elements as children of the left node** of the second level. Then, put the next **two elements as children of the right node** of the second level, no. of elements on level `λ-3 = 4`.
- Repeat until the last element.

#### Relationship between array indexes and tree element

A complete binary tree has an interesting relationship that can be used to find the **children and parents of any node**. If the index of any element in the array is `i`, 

- The element at index `2i+1` will become the **left child** and,
- The element at index `2i+2` index will become the **right child**. 
- The **parent** of any element at index `i` is given by the lower bound of `(i-1)/2`.

### Degenerate or Pathological Tree

A degenerate or pathological binary tree is a tree having a single child either left or right.

| ![Degenerate Binary Tree](./assets/Degenerate%20Binary%20Tree.png) |
| ----------------------------------------------------- |

### Skewed Binary Tree

A skewed binary tree is a pathological/degenerate tree where the tree is dominated by either left or right nodes. Thus, there are two types of skewed binary tree: **left-skewed** and **right-skewed** binary trees.

| ![Skeweed Binary Tree](./assets/Skewed%20Binary%20Tree.png) |
| ----------------------------------------------------- |

### Balanced Binary Tree

A balanced binary tree is a binary tree where the difference between the height of the left and the right subtree for each node is either 0 or 1. It is also referred to as a `height-balanced binary tree`.

| ![Balanced Binary Tree](./assets/Balanced%20Binary%20Tree.png) |
| ----------------------------------------------------- |

The conditions for a height-balanced binary tree are:

- The difference between the left and the right subtree for any node is **not more than 1**.
- The left subtree is **balanced**.
- The right subtree is **balanced**.

## References

1. [Programiz Tree Data Structures](https://www.programiz.com/dsa/binary-tree)