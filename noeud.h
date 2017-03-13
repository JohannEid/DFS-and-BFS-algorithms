#ifndef __NOEUD__
#define __NOEUD__

#include "header.h"

class Noeud
{
private:
	int m_i, m_j;
	Noeud* m_next;

public:
	Noeud();
	Noeud(int i, int j);
	~Noeud();

	//Setteurs
	void setNext(Noeud * next);
	// Special setteur, qui fait les deux coordonnées à la fois
	void setCoords(int i, int j);

	//Getteurs
	int getX();
	int getY();
	Noeud* getNext();
};

#endif // __NOEUD__