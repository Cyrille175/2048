#include <string>

class Grille {
    private:
    int tab[4][4];

    public:

    Grille();

    std::string afficher_tableau();

    void gauche();

    void droite();

    void haut();

    void bas();

// une fois que la modification causé par le mouvement est fait il faut le modifier de nouveau pour mettre au hasard une case vide a 2 ou 4
    void Generer_hasard();

    void Dessiner_Grille();

};