//
//  main.c
//  09_exo10_struct_enum
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    typedef enum Etat Etat;
    enum Etat {
        celibataire = 1,
        marie = 2,
        pacse = 3,
        divorse = 4,
    };
    typedef struct Date Date;
    struct Date {
        int jour;
        char mois[15];
        int annee;
    };
    typedef struct Individu Individu;
    struct Individu{
        char Nom[15];
        char Prenom[15];
        Date Date_naissance;
        Etat Situation;
    };

    Individu indiv1;
    
    printf("Saisir le nom : ");
    scanf("%s", &indiv1.Nom);
    printf("Saisir le prénom : ");
    scanf("%s", &indiv1.Prenom);
    printf("Saisir le jour de naissance : ");
    scanf("%d", &indiv1.Date_naissance.jour);
    printf("Saisir le mois de naissance : ");
    scanf("%s", &indiv1.Date_naissance.mois);
    printf("Saisir l'année de naissance : ");
    scanf("%d", &indiv1.Date_naissance.annee);
    printf("Saisir la situation matrimoniale : \n");
    printf("celibataire (1), marie (2), pacse (3), divorse (4) : \n");
    scanf("%d", &indiv1.Situation);
    
    printf("\nNom : %s\n", indiv1.Nom);
    printf("Prénom : %s\n", indiv1.Prenom);
    printf("Date de naissance : %d/%s/%d\n", indiv1.Date_naissance.jour, indiv1.Date_naissance.mois, indiv1.Date_naissance.annee);
    switch (indiv1.Situation) {
        case 1:
            printf("Situation : Célibataire\n");
            break;
        case 2:
            printf("Situation : Marié\n");
            break;
        case 3:
            printf("Situation : Pacsé\n");
            break;
        case 4:
            printf("Situation : Divorsé\n");
            break;
        default:
            break;
    }
    return 0;
}
