package piscine

func BTreeIsBinary(root *TreeNode) bool {
	if root == nil {
		return true
	}
	if root.Left != nil {
		if root.Left.Data >= root.Data || !BTreeIsBinary(root.Left) {
			return false
		}
	}
	if root.Right != nil {
		if root.Right.Data <= root.Data || !BTreeIsBinary(root.Right) {
			return false
		}
	}
	return true
}
