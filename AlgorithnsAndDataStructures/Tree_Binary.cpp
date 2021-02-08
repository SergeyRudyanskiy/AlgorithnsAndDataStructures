#include "Tree_Binary.hpp"

struct Node* new_node(int data) {
	struct Node* node = new(struct Node);
	node->data  = data;
	node->left  = nullptr;
	node->right = nullptr;

	return node;
}

static Node* look_up_data(struct Node* node, int data) {
	if (node == nullptr || data == node->data) { return node; }
	
	return (data < node->data ? look_up_data(node->left, data) : look_up_data(node->right, data));
}

struct Node* insert(struct Node* node, int data) {
	if (node == nullptr) { return new_node(data); }
	(data <= node->data) ? node->left  = insert(node->left,  data) : node->right = insert(node->right, data);

	return node;
}

size_t size(struct Node* node) {
	return (node == nullptr ? 0u : size(node->left) + 1u + size(node->right));
}

size_t depth_max(struct Node* node) {
	if (node == nullptr) { return 0u; }

	size_t depth_left  = depth_max(node->left);
	size_t depth_right = depth_max(node->right);

	return (depth_left > depth_right ? depth_left : depth_right) + 1u;
}

int get_min_value(struct Node* node) {
	struct Node* current = node;
	while (current->left != nullptr) { current = current->left; }

	return current->data;
}

int get_max_value(struct Node* node) {
	struct Node* current = node;
	while (current->right != nullptr) { current = current->right; }

	return current->data;
}

bool has_path_sum(struct Node* node, int sum) {
	if (node == nullptr) { return sum == 0; }

	return (has_path_sum(node->left, sum - node->data) || has_path_sum(node->right, sum - node->data));
}

bool is_tree_same(struct Node* node_tree_first, struct Node* node_tree_second) {
	if (node_tree_first == nullptr && node_tree_second == nullptr) { return true; }
	else if (node_tree_first != nullptr && node_tree_second != nullptr) {
		return node_tree_first->data == node_tree_second->data  &&
				is_tree_same(node_tree_first->left,	  node_tree_second->left) &&
				is_tree_same(node_tree_first->right,  node_tree_second->right);
	}
	else { return false; }
}

bool is_BST(struct Node* node) {
	if (node == nullptr) { return true; }

	if (node->left  != nullptr && get_min_value(node->left)  >  node->data) { return false; }
	if (node->right != nullptr && get_max_value(node->right) <= node->data) { return false; }

	if (!is_BST(node->left) || !is_BST(node->right)) { return false; }

	return true;
}