#include<stdio.h>

typedef struct TreeNode {
	int value;
	TreeNode *left;
	TreeNode *right;
}TreeNode;

typedef struct Tree {
	TreeNode *root;
}Tree;


int main()
{
	Tree *BSTtree;
	TreeNode *node->value = 8;
	TreeNode *root;
	
	tree_Insert(root,node);

	return 0;
}


void  tree_search(Tree *BSTtree, int number) {
	while (BSTtree->root == NULL && number == BSTtree->root->value)
		if (number < BSTtree->root->value)
			BSTtree = BSTtree->root->left;
		else
			BSTtree = BSTtree->root->right;

}

void tree_Insert(Tree *BSTtree, TreeNode *Node) {
	TreeNode *temp = NULL;
	TreeNode *point = BSTtree->root;

	while (point != NULL) {
		temp = point;
		if (Node->value < point->value) // 트리노드의 값과 추가하려는 노드의 값을 비교 
			point = point->left;      // 트리노드의 값이 크다면 트리의 왼쪽으로 보내고
		else
			point = point->right;      // 트리노드의 값이 작다면 트리의 오른쪽으로 보낸다

	}
	Node = (TreeNode *) malloc(sizeof(TreeNode));
	if (temp == NULL) {
		BSTtree->root = Node;
	} else if (Node->value < point->value) {
		temp->left = Node;
	} else
		temp->right = Node;
}

void tree_delete(Tree *BSTtree, int number) {
	TreeNode *temp = NULL
	TreeNode *point = BSTtree->root;
	TreeNode *child;
	TreeNode *succ,*succ_p;
	
	// 삭제해야하는 노드를 찾는 과정
	while(point != NULL && point->value != number) {
		temp = point;
		if(key < point->value)
			point = point_left;
		else
			point = point_right;
	}

	//  case 0 : 트리에 노드가 없는 경우 
	if(point == NULL) {
		printf("key is not in tree");
		return 0;
	}

	// case 1 : 삭제하려는 노드가 자식이 없는 단말노드
	if(point->left == NULL && point->right == NULL) {
		if(temp != NULL) {
			if(temp->left == point)
				temp->left = NULL;
			else
				temp->right = NULL;
		}else
			BSTtree->root = NULL;
	} 
	// case 2 : 삭제하려는 노드의 자식이 왼쪽이나 오른쪽에 하나만 있는 경우
	else if(point->left == NULL || point->right == NULL) {
			if(point->left != NULL)
				child = point->left;
			else
				child = point->right;
			if(temp != NULL) {
				if(temp->left == point)
					temp->left = child;
				else
					temp->right = child;
			} else
				BSTtree->root = child;
	}
	// case 3 : 삭제하려는 노드에 자식이 2개 있을 경우 
	else {	
		succ_p = point;
		succ = point->right;
		while(succ_p->left != null) {
			succ_p = succ;
			succ = succ->left;
		}

		if(succ_p->left == succ)
			succ_p->left = succ->right;
		else
			succ_p->right = succ->right;
		point->value = succ->value;
		point = succ;
	}
	free(t);
}
