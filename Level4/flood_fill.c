#include "flood_fill.h"

void fill(char **tab, t_point size, t_point curr, char to_fill)
{
	if (curr.x < 0 || curr.y < 0 || curr.x >= size.x || curr.y >= size.y || tab[curr.x][curr.y] != to_fill)
		return ;
	
	tab[curr.x][curr.y] = 'F';

	fill(tab, size, (t_point){curr.x, curr.y - 1}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y + 1}, to_fill);
	fill(tab, size, (t_point){curr.x + 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x - 1, curr.y}, to_fill);
	
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.x][begin.y]);
}
