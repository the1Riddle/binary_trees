package piscine

/**
 * 
 * Return: the node with the maximum value in the tree given by root
 */

func BTreeMax(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}

	current := root
	for current.Right != nil {
		current = current.Right
	}

	return current
}
