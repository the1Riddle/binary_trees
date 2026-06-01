package piscine

/**
 * 
 * Return: the number of levels of the binary tree (height of the tree)
 */

func BTreeLevelCount(root *TreeNode) int {
	if root == nil {
		return 0
	}
	left := BTreeLevelCount(root.Left)
	right := BTreeLevelCount(root.Right)

	if left > right {
		return left + 1
	}
	return right + 1
}
