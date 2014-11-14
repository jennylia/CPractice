//
//  15-12.c
//  Day15
//
//  Created by Jenny Bunny on 2014-11-02.
//  Copyright (c) 2014 Jenny Bunny. All rights reserved.
//

#include "15-12.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// the list data structure:
struct data{
    char name[20];
    struct data *next;
};

typedef struct data PERSON;
typedef PERSON * LINK;

int main(){
    // head next and current element pointers
    LINK head = NULL;
    LINK new = NULL;
    LINK current = NULL;
    LINK current2 = NULL;
    
    new = (LINK) malloc (sizeof(PERSON));
    new -> next = head;
    head = new;
    
    strcpy(new->name, "Abiligil");
    
    current = head;
    while(current->next != NULL){
        current = current->next;
    }
    
    new = (LINK) malloc (sizeof(PERSON));
    current -> next = new;
    new->next = NULL;
    strcpy(new->name, "Catherine");
    
    new = (LINK) malloc (sizeof(PERSON));
    new -> next = head->next;
    head->next = new;
    strcpy(new->name, "Beatrice");

    current = head;
    
    while(current != NULL){
        printf("\n%s", current->name);
        current = current->next;
        
    }
    
     current = head;
    
    while(current != NULL){
        printf("\nfree this one %s", current->name);
      
        current2 = current->next;
        free (current);
        current = current2;
    }
    
    current = head;
     printf("\n%s", current->name);
//    if(current->next)
//    printf("\n%s", current->next->name);
    
//    while(current->next != NULL){
//        printf("\n%s", current->name);
//        current = current->next;
//        
//    }
    return 0;

    
    
}
