#ifndef BINTREE_H
#define  BINTREE_H
// Definition der Struktur für einen Knoten im Binärbaum
typedef struct bintree{
    struct bintree* left  ;
    char            node;
    struct bintree* right;
}bintree;

bintree * create_node (char c);// Funktion zum Erstellen eines neuen Knotens
char get_data(bintree * node); // gibt den Wert des Knotens zurück das ist eine selektor funktion ,noch bekannt als getter funktion

void print_inoder(bintree* root);// Inorder Traversierung des Baums und Ausgabe der Knotenwerte
int count (bintree* root); // Zählt die Anzahl der Knoten im Baum
int height (bintree* root);
#endif