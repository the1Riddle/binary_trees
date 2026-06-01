package piscine

/**
 * 
 * return: TreeNode with a data field equal to elem if it exists in the tree,
 * otherwise return nil
 */

func BTreeSearchItem(root *TreeNode, elem string) *TreeNode {
	if root == nil {
		return nil
	}
	if elem < root.Data {
		return BTreeSearchItem(root.Left, elem)
	} else if elem > root.Data {
		return BTreeSearchItem(root.Right, elem)
	}
	return root
}
