#include "Grille.h"
#include<random>
#include <iostream>
#include <string>

Grille::Grille() {
int x1=std::rand() % 4;
int x2=std::rand() % 4;
int y1=std::rand() % 4;
int y2=std::rand() % 4;
while(y1==y2) {
    y2=(std::rand() % 4 + 1);
}
for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
        
        if (i==x1 && j==y1) {
            tab [i][j]=2;
        }
        
        else if (i==x2 && j==y2) {
                tab [i][j]=4;
            }
            
            else tab[i][j]=0;
    }
}
}



