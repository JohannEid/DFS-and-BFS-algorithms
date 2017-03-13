#include "case.h"

Case::Case(): m_taille(0), m_tete(NULL), m_queue(NULL), m_marque(false)
{}

Case::Case(int taille, bool marque): m_taille(taille), m_tete(NULL), m_queue(NULL), m_marque(marque)
{}

Case::~Case()
{
	if(m_tete != NULL) delete m_tete;
}

//Setteurs
void Case::setMarque(bool marque)
{
	m_marque = marque;
}

//Getteurs
bool Case::getMarqued()
{
	return m_marque;
}
bool Case::isLinked(int x, int y)
{
	// 0 Variables
	bool retour(false), stop(false);
	Noeud * lecture(m_tete);

	// 1 Test
	if(m_tete != NULL)
	{
		do{
			if(lecture->getX() == x && lecture->getY() == y) retour = true;
			// Passage au vecteur suivant
			if(lecture != m_queue) lecture = lecture->getNext();
			else stop = true;
		}
		while(stop == false && retour == false);
	}
	return retour;
}

void Case::addKnot(int x, int y)
{
	//0 Variables
	Noeud* buffer(NULL);

	//1 On se place dans le cas où ceette case n'a pas encore de noeud en tete ou queue
	if(m_tete == NULL)
	{
		//1.1 Creation d'un noeud sur lequel pointent la tete et la queue
		m_tete = new Noeud;
		m_queue = m_tete;

		//1.2 On donne à ce noeud les coordonnees x, y.
		m_tete->setCoords(x, y);
	}
	//2 Dans le cas d'une case qui contient deja des voisins
	else
	{
		buffer = new Noeud;
		// a ajouter : test que le meme noeud n'existe pas deja

		// 2.1 Donner des coordonnees a ce nouveau noeud
		buffer->setCoords(x, y);
		// 2.2 Ajout du nouveu noeud en queue de liste chainee
		m_queue->setNext(buffer);
		m_queue = buffer;
	}
}