#include<stdio.h>
#include<stdlib.h>
#include"bintree.h"

// Erstellt einen neuen Knoten mit dem gegebenen Zeichen

bintree * create_node (char c ){
    bintree* NewKnode = malloc(sizeof(bintree));
    if(NewKnode==NULL)
    {
        return NULL ;
    }
    NewKnode->left=NULL;
    NewKnode->node= c ;
    NewKnode->right=NULL;
    return NewKnode;
}

// Gibt den Wert des Knotens zurück (selektor Funktion(getter funktion))
char get_data(bintree* node)
{
    return  node->node;
}

// Inorder Traversierung des Baums und Ausgabe der Knotenwerte
void print_inoder(bintree* root)
{
    if(root==NULL)
        return;
    print_inoder(root->left);
    printf("%c", root->node);
    print_inoder(root->right);
    return;
}

// Zählt die Anzahl der Knoten im Baum
int count (bintree* root){
    if(root==NULL)
        return 0;

    else{
        return 1 + count(root->left)+(count(root->right));
    }
}

// Berechnet die Höhe des Baums
int height (bintree* root){
    if(root==NULL)
        return -1;

    else{
        int right_height = height(root->right); // Höhe des rechten Teilbaums
        int left_height = height(root->left);    // Höhe des linken Teilbaums

        if(right_height>left_height)   // Vergleiche die Höhen der Teilbäume
        {
            return 1 + right_height;   // Rückgabe der größeren Höhe plus eins für den aktuellen Knoten
        }

        else
        {
            return 1 + left_height;   // Rückgabe der größeren Höhe plus eins für den aktuellen Knoten
        }
    }
}