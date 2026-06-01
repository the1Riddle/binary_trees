package piscine

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
