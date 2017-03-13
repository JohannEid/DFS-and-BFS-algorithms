#include "noeud.h"

Noeud::Noeud(): m_i(0), m_j(0), m_next(NULL)
{}

Noeud::Noeud(int i, int j): m_i(i), m_j(j), m_next(NULL)
{}

Noeud::~Noeud()
{
	if(m_next != NULL) delete m_next;
}

void Noeud::setCoords(int i, int j)
{
	m_i = i;
	m_j = j;
}
void Noeud::setNext(Noeud * next)
{
	m_next = next;
}

// Getteur 
int Noeud::getX()
{
	return m_i;
}
int Noeud::getY()
{
	return m_j;
}
Noeud* Noeud::getNext()
{
	return m_next;
}