/*
 *  Object-Oriented Programming
 *  FMI SU "St. Kliment Ohridski"
 *   
 *  Valentin Kirilov
 *  val.kirilov@gmail.com
 *  valkirilov.com
 *
 *  30 March 2014
 *
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <deque>
using namespace std;

struct Node {
	int value;
	Node* left;
	Node* right;
};

struct Pair {	
	int value1;
	int value2;
};

class BinaryTree {
private:

	

	void insert(int value1, int value2, Node *leaf);
	

public:

	BinaryTree();
	//~BinaryTree();

	Node* root_;
	void insert(int value1, int value2);

	deque<Node *> insert(Node *leaf, int value1, int value2);
	Node* getRoot();

};

BinaryTree::BinaryTree() {
	root_ = new Node;
	root_->value = 0;
	root_->left = NULL;
	root_->right = NULL;
}

void BinaryTree::insert(int value1, int value2) {
	insert(value1, value2, root_);
}

Node* BinaryTree::getRoot() {
	return root_;
}

void BinaryTree::insert(int value1, int value2, Node *leaf) {
	if (leaf->left == NULL && leaf->right == NULL) {
		// Create new nodes
		if (value1 != NULL) {
			leaf->left = new Node;
			leaf->left->value = value1;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}

		if (value2 != NULL) {
			leaf->right = new Node;
			leaf->right->value = value2;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
	}
	else {
		if (leaf->left->left == NULL && leaf->left->right == NULL) {
			insert(value1, value2, leaf->left);
		}
		else if (leaf->right->left == NULL && leaf->right->right == NULL) {
			insert(value1, value2, leaf->right);	
		}
		else {
			// Go deeper
			cout << "go deeper";
		}
	}
}

deque<Node *> BinaryTree::insert(Node *leaf, int value1, int value2) {
	std::deque<Node *> returnNodes;

	if (value1 != -1) {
		leaf->left = new Node;
		leaf->left->value = value1;	
		leaf->left->left = NULL;
		leaf->left->right = NULL;

		cout << "Tree: Adding node " + value1 << endl;
		returnNodes.push_back(leaf->left);
	}
	
	if (value2 != -1) {
		leaf->right = new Node;
		leaf->right->value = value2;
		leaf->right->left = NULL;
		leaf->right->right = NULL;

		cout << "Tree: Adding node " + value2 << endl;
		returnNodes.push_back(leaf->right);
	}

	return returnNodes;
}

void printIndent(int index) {
	for (int i=0; i<=index; i++)
		cout << "  ";
}

void printLevelOrder(Node *root, int indent) {
	if (!root) 
		return;

	deque<Node*> currentLevel, nextLevel;
	currentLevel.push_back(root);

	while (!currentLevel.empty()) {
		Node *currNode = currentLevel.front();
		currentLevel.pop_front();
		if (currNode) {
			printIndent(indent);
			cout << currNode->value << endl;
			nextLevel.push_back(currNode->left);
			nextLevel.push_back(currNode->right);
		}
		if (currentLevel.empty()) {
		  	swap(currentLevel, nextLevel);
		  	indent++;
		}
	}
}

/*
void BFS(Node *root) {
    std::deque<Node *> query;
    std::deque<Pair> pairs;
    query.push_back(root);

    // Init tree
    Pair pair = {1, 2};
    pairs.push_back(pair);
    
    int iterations = 0;
    while (query.size() != 0) {
    	//cout << "Size: " << query.size() << endl;
        Node *next = query.front();
        
        // you may want to print the current node here or do other processing
        printIndent(iterations);
        cout << "" << next->value << endl;

        query.pop_front();
        if (next->left) {
            query.push_back(next->left);
        }
        if (next->right) {
            query.push_back(next->right);
            
        }
    }
}
*/

void recursiveBFS(deque<Node *> queue, int indent) {
	if (queue.empty())
		return;

	Node *node = queue.front();
	queue.pop_front();
  
  	printIndent(indent);
  	cout << node->value << endl;
  	
  	if (node->left != NULL)
  		queue.push_back(node->left);
  	if (node->right != NULL) 
  		queue.push_back(node->right);

  	recursiveBFS(queue, indent+1);
}

void BFS(Node *root, int indent) {
	std::deque<Node *> queue;
	queue.push_back(root);
	recursiveBFS(queue, indent+1);
}


/*
void recursiveDFS(Node *root, int indent) {

	printIndent(indent);
	cout << root->value << endl;

	// If it's a leaf
	if (root->left == NULL && root->right == NULL) {
		return;
	}

	indent++;
	if (root->left != NULL)
		recursiveBFS(root->left, indent);
	if (root->right != NULL)
		recursiveBFS(root->right, indent);
}
*/
void recursiveDFS(Node *root, int indent) {

	if (root) {
        printIndent(indent);
		cout << root->value << endl;

        if (root->left) {
       		recursiveDFS(root->left, indent+1);
        }
        if (root->right) {
        	recursiveDFS(root->right, indent+1);
        }

    }
}

void createBFS(BinaryTree tree) {
	std::deque<Node *> treeNodes;
	treeNodes.push_back(tree.getRoot());

    // Init tree
    Pair pair = {1, 2};

    Pair pairs[] = { {1, 2},
    				{3, 4},
    				{5, -1},
    				{-1, -1},
    				{6, 7},
    				{8, -1},
    				{-1, -1},
    				{-1, -1} };


    for (int i=0; i<8; i++) {
    	cout << "Adding " << pairs[i].value1 << " and " << pairs[i].value2 << endl;

    	cout << "Getting the node for adding: ";
    	Node* currentNode = treeNodes.front();
    	cout << currentNode->value << endl;
    	std::deque<Node *> newNodes = tree.insert(currentNode, pairs[i].value1, pairs[i].value2);

    	cout << "Result nodes returned. Size = " << newNodes.size() << endl;
    	// Add new nodes to the treeNodes
    	while(newNodes.size() > 0) {
    		Node* newNode = newNodes.front();
    		//cout << "Adding node to the tree: " << newNode << endl;

    		treeNodes.push_back(newNode);
    		newNodes.pop_front();
    	}

    	treeNodes.pop_front();
    }
    

}

int readInput() {
	int nodes, entered = 0;
	cin >> nodes;


	while (entered < nodes) {
		string in;
		getline(std::cin, in, '\n');



		cout << in << " <<That was." << endl;

		entered++;
		if (in == "") {
			cout << "That was a new line." << endl;
		}
		else if (in == " ") {
			cout << " " << endl;
		}
		else if (atoi(in.c_str())) {
			cout << atoi(in.c_str()) << endl;
		}
		else {
			entered--;
		}
	
	}
	
}


int main() {

	readInput();
	/*
	BinaryTree tree;

	createBFS(tree);

	cout << "BFS" << endl;
	printLevelOrder(tree.getRoot(), 0);

	cout << "DFS" << endl;
	recursiveDFS(tree.getRoot(), 0);
	*/


	return 0;
}