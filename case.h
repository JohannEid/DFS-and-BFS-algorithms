#ifndef __CASE__
#define __CASE__

#include "header.h"
#include "noeud.h"

class Case
{
private:
	int m_taille;
	Noeud* m_tete;
	Noeud* m_queue;
	bool m_marque;
public:
	Case();
	Case(int taille, bool marque);
	~Case();

	//Setteurs
	void setMarque(bool marque);

	//Getteurs
	bool getMarqued();
	// Teste si la case est reliée à une case de coordonnées x, y
	bool isLinked(int x, int y);

	//Ajoute un Noeud à la liste
	void addKnot(int x, int y);
};

#endif // __CASE__