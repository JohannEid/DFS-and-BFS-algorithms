#ifndef __LABYRINTH__
#define __LABYRINTH__

#include "header.h"
#include "case.h"
#include "noeud.h"

class Labyrinth
{
private:
	Case** m_port;
	int m_hauteur, m_largeur;
	Noeud m_in, m_out,m_lon;
    void add_nodes_list(const std::list<std::pair<int, int>>& possible_coordinates,
                        std::queue<std::pair<int,int>>& my_queue);
    void affichage();

public:
	Labyrinth();
	Labyrinth(int hauteur, int largeur);
	Labyrinth(int hauteur, int largeur, int entreeI, int entreeJ, int sortieI, int sortieJ);
	~Labyrinth();

	void readFile();
	void allocation();

    void solve_labyrinth_BFS();
    void solve_labyrinth_DFS(std::pair<int,int>& coordinates);

    const std::pair<int,int>& get_m_in_coord(){
        std::pair<int ,int> to_return = std::make_pair(m_in.getX(),m_in.getY());
        return  to_return;
    };

};

#endif // __LABYRINTH__