typedef struct binaryTree{
    int value;
    struct binaryTree *father;
    struct binaryTree *left;
    struct binaryTree *right;
}tree;  


int info(tree *n);
tree *father(tree *n);
tree *brother(tree *n);
tree *left(tree *n);
tree *right(tree *n);
tree *maketree(int value);
tree *setNodeLeft(tree *root, tree *newNode);
tree *setNodeRight(tree *root, tree *newNode);
tree *insertSorted(tree *root, int value);
void Preordem(tree *root);
void Emordem(tree *root);
void Posordem(tree *root);
tree *search(tree *root,int value);
tree *deleteRoot(tree *root);
tree *deleteNode(tree *root, int value);
tree *minValue(tree *root);
tree *maxValue(tree *root);