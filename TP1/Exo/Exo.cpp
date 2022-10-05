
#include "Pile_entier.h";
#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
	pile_entier *pile = new pile_entier(20);




	// v�rifie si la pile est vide ou pas

	if (pile->vide() == 1)
	{
		printf("La Pile est vide.\n");

	}
	else if (pile->vide() == 0)
	{
		printf("La Pile n'est pas vide.\n");
	}

	// v�rifie si la pile est pleine ou non

	if (pile->pleine() == 1)
	{
		printf("La Pile est pleine.\n");
	}
	else if (pile->pleine() == 0)
	{
		printf("La Pile n'est pas pleine.\n");
	}

	// remplie la pile 

	for (int i = 0; pile->pleine() == 0; i++)
	{
		
		printf("La Pile va se remplir : %d.\n", i);
		pile->empile(i);
	}

	// vide la pile

	while (pile->vide() != 1)
	{
		int val = pile->depile();
		printf("La Pile va se vide : %d.\n", val);

	}

	return 0;
}
