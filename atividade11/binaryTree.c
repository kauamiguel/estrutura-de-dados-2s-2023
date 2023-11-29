#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"


int info(tree *n){
    return n->value;
}

tree *father(tree *n){
    return n->father;
}

tree *left(tree *n){
    return n->left;
}

tree *right(tree *n){
    return n->right;
}

tree *maketree(int value){
    tree *root = (tree *)malloc(sizeof(tree));
    root->father = NULL;
    root->left = NULL;
    root->right = NULL;
    root->value = value;
    return root;
}

tree *setNodeLeft(tree *root, tree *newNode){
    root->left = newNode;

    if(newNode != NULL){
        newNode->father = root;
    }

    return newNode;
}

tree *setNodeRight(tree *root, tree *newNode){
    root->right = newNode;

    if(newNode != NULL){
        newNode->father = root;
    }

    return newNode;
}

tree *insertSorted(tree *root, int value){
    if(root == NULL){
        return maketree(value);
    }

    if(value < info(root)){
        setNodeLeft(root, insertSorted(left(root), value));
    }else{
        setNodeRight(root, insertSorted(right(root), value));
    }

    return root;
}

void Emordem(tree *root){

    if(root != NULL){
        Emordem(root->left);
        printf("%d ", root->value);
        Emordem(root->right);
    }
}

tree *search(tree *root,int value){
    if(info(root) == value){
        return root;
    }

    if(value < info(root)){
        return search(left(root), value);
    }else{
        return search(right(root), value);
    }
}

//Use the algorithm to delete the root to each child node
tree *deleteNode(tree *root, int value){
    tree *deletedNode = search(root, value);

    if(deletedNode->father == NULL){
        return deleteRoot(root);
    }

    if(deletedNode->father->left == deletedNode){
        setNodeLeft(deletedNode->father, deleteRoot(deletedNode));
    }else{
        setNodeRight(deletedNode->father, deleteRoot(deletedNode));
    }

    return root;
}

//This function is an algorithm to delete the root
tree *deleteRoot(tree *root){

    tree *newRoot;

    if (root == NULL){
        return root;
    }

    if(root->left == NULL){
        //My right node become my new Root if in the left is null;
        newRoot = root->right;
    }else{
        newRoot = root->left;

        //Reach the last right element of the left node of root;
        while(newRoot->right != NULL){
            newRoot = newRoot->right;
        }

        if(newRoot->father != root){
            //Set left child of newroot as the right child of newRoot Father
            setNodeRight(newRoot->father, left(newRoot));
            //Set the left of newRoot as the left of old root
            setNodeLeft(newRoot, left(root));
        }

        setNodeRight(newRoot, right(root));
    }

    //Deallocate the oldest root and return the new one
    if(newRoot != NULL){
        newRoot->father = NULL;
        free(root);
    }

    return newRoot;
}


tree *minValue(tree *root){
    tree *aux = root;

    if(aux == NULL){
        return NULL;
    }

    while(aux->left != NULL){
        aux = aux->left;
    }

    return aux;

}

tree *maxValue(tree *root){
    tree *aux = root;

    if(aux == NULL){
        return NULL;
    }

    while(aux->right != NULL){
        aux = aux->right;
    }
    
    return aux;
}
