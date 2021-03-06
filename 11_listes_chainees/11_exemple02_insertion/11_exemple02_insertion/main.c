//
//  main.c
//  11_exemple02_insertion
//
//  Created by Francois LABASTIE on 18/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct Maillon Maillon;
struct Maillon {
    int valeur;
    Maillon *suivant;
};

int main() {
    int i=0;
    Maillon *maListe;
    Maillon *maListebis;
    Maillon *element = malloc(sizeof(*element));
    element->valeur = 0;
    element->suivant=NULL;
    maListe = element;
    
    for (i=1; i<4; i++)
    {
        Maillon *element = malloc(sizeof(*element));
        element->valeur = i;
        element->suivant = NULL;
        element->suivant = maListe;
        maListe = element;
    }
    maListebis = maListe;
    
    while (maListebis != NULL)
    {
        printf("%d -> ", maListebis->valeur);
        maListebis = maListebis->suivant;
    } 

    printf("NULL\n");
    return 0;
}
