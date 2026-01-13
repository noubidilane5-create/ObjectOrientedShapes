#include<stdio.h>
#include<stdlib.h>
#include"bintree.h"

int main(){
    // Erstellen eines einfachen Binärbaums
    bintree* New=create_node('A');
    bintree* Newk1=create_node('B');
    bintree* Newk2=create_node('C');
    
    // Verknüpfen der Knoten
    New->right = Newk1;
    New->left = Newk2;
    
    // Ausgabe der Knoten in Inorder-Traversierung
    print_inoder(New);
    
    // Zählen der Knoten und Berechnung der Höhe des Baums
    int count_knode= count(New);
    int height_tree= height(New);

    // Ausgabe der Ergebnisse
    printf("\n Dieses Baum hat %d knoten und eine height von %d \n", count_knode, height_tree);
    
    // Freigabe des Speichers
    free(New);
    free(Newk1);
    free(Newk2);
    return 0 ;

    
    

}