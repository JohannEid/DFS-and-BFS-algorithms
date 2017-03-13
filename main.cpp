#include "header.h"
#include "labyrinthe.h"

int main()
{
	std::pair<int,int> initial_value_dfs = std::make_pair(0,0) ;
	//0 Variables
	Labyrinth tab1;

	//1 Lecture
	tab1.readFile();

	//2 Affichage
	//initial_value_dfs.first = tab1.get_m_in_coord().first;
	//initial_value_dfs.second = tab1.get_m_in_coord().second;

	tab1.solve_labyrinth_DFS(initial_value_dfs);


	return 0;
}