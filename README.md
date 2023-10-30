# Binary Trees


Data structures
-----------------------------------

The following data structures and types for binary trees are used and are included in the header file.
**Basic Binary Tree**

	/**
	 * struct binary_tree_s - Binary tree node
	 *
	 * @n: Integer stored in the node
	 * @parent: Pointer to the parent node
	 * @left: Pointer to the left child node
	 * @right: Pointer to the right child node
	 */
	struct binary_tree_s
	{
		int n;
		struct binary_tree_s *parent;
		struct binary_tree_s *left;
		struct binary_tree_s *right;
	};
	
	typedef struct binary_tree_s binary_tree_t;

**Binary Search Tree**

	typedef struct binary_tree_s bst_t;

**AVL Tree**

	typedef struct binary_tree_s avl_t;

**Max Binary Heap**

	typedef struct binary_tree_s heap_t;

**Note:** From files 0-* to 23-* simple binary trees are the ones dealt with. They are not BSTs, thus they don’t follow any kind of rule.

The AUTHORS
----------------------------------

1. [Elvis Otieno](https://github.com/elvismalsa)
2. [Nigel Zenda](https://github.com/Heavenboi)
