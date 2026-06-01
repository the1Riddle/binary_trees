package piscine

/**
 * 
 * 
 * Return: the node with the minimum value in the tree given by root
 */

func BTreeMin(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}

	current := root
	for current.Left != nil {
		current = current.Left
	}

	return current
}
