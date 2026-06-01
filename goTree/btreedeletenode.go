package piscine

/**
 * Description: deletes node from the tree given by root
 * 
 */

type TreeNode struct {
	Left, Right, Parent *TreeNode
	Data                string
}

func BTreeInsertData(root *TreeNode, data string) *TreeNode {
	if root == nil {
		return &TreeNode{Data: data}
	}

	if data < root.Data {
		root.Left = BTreeInsertData(root.Left, data)
		root.Left.Parent = root
	} else {
		root.Right = BTreeInsertData(root.Right, data)
		root.Right.Parent = root
	}

	return root
}

func BTreeApplyInorder(root *TreeNode, f func(...interface{}) (int, error)) {
	if root == nil {
		return
	}
	BTreeApplyInorder(root.Left, f)
	f(root.Data)
	BTreeApplyInorder(root.Right, f)
}

func BTreeSearchItem(root *TreeNode, elem string) *TreeNode {
	if root == nil {
		return nil
	}

	if elem > root.Data {
		return BTreeSearchItem(root.Right, elem)
	} else if elem < root.Data {
		return BTreeSearchItem(root.Left, elem)
	} else if elem == root.Data {
		return root
	} else {
		return root
	}
}


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

func BTreeTransplant(root, node, rplc *TreeNode) *TreeNode {
	if node == nil {
		return root
	}
	toRep := rplc

	if node.Parent == nil {
		root = toRep
	} else if node == node.Parent.Left {
		node.Parent.Left = toRep
	} else {
		node.Parent.Right = toRep
	}

	if toRep != nil {
		toRep.Parent = node.Parent
	}

	return root
}

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


func BTreeDeleteNode(root, node *TreeNode) *TreeNode {
	if node == nil {
		return root
	}

	if node.Left == nil {
		return BTreeTransplant(root, node, node.Right)

	} else if node.Right == nil {
		return BTreeTransplant(root, node, node.Left)

	} else {
		repWith := BTreeMin(node.Right)

		if repWith.Parent != node {
			root = BTreeTransplant(root, repWith, repWith.Right)
			repWith.Right = node.Right
			if repWith.Right != nil {
				repWith.Right.Parent = repWith
			}
		}

		root = BTreeTransplant(root, node, repWith)
		repWith.Left = node.Left
		if repWith.Left != nil {
			repWith.Left.Parent = repWith
		}

		return root
	}
}