#include "rn.h"

void		ft_display_double(double *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %.2f\n", i, tab[i]);
		i++;
	}
	printf("\n");
}

void		ft_apply(t_neurone *e1, double *poids)
{
	t_neurone	*tmp;
	t_lien		*tmp2;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < 11)
	{
		j = 0;
		while (j < 3)
		{
			tmp2 = e1[i].links;
			tmp2->poids = poids[k];
			j++;
			k++;
			
		}
		i++;
	}
	i = 0;
	j = 0;
	tmp2[0] = e1[0].links[j];
	tmp = tmp2->out;
	while (i < 4)
	{
		tmp2[0] = tmp[i].links[0];
		tmp2->poids = poids[k];
		k++;
		i++;
	}
//	ft_putstr("");
}

double		*ft_random(double *poids)
{
	int i;

	i = 0;
	while (i < 37)
	{
		poids[i] = (rand()%(100*(-5 - 5) + 5))/100.-5;
		i++;
	}
	return (poids);
}

double		*ft_set_weight(int mode, t_neurone *e1, double *poids)
{
	if (mode == 2)
	{
		if (!(poids = (double*)malloc(sizeof(double) * 37)))
			return ;
		ft_random(poids);
	}
	ft_apply(e1, poids);
	return (poids);
}

t_lien		*ft_init_link(int couche)
{
	t_lien	*link;

	if (couche == 1)
	{
		if (!(link = (t_lien*)malloc(sizeof(t_lien) * 3)))
			return(NULL);
	}
	else if (couche == 2)
	{
		if (!(link = (t_lien*)malloc(sizeof(t_lien))))
			return(NULL);
	}
	else if (couche == 3)
		return(NULL);
	return (link);
}

void	ft_set_links(t_lien *links, t_neurone *next, int etage)
{
	int	i;
	static int nb;

	i = 0;
	nb = 0;
	if (etage == 1)
	{
		while (i < 3)
		{
			links[i].out = &next[i];
			nb++;
			i++;
		}
	}
	else if (etage == 2)
	{
		links[i].out = &next[i];
		nb++;
	}
	else
		return ;
}

void		ft_set_network(int etage, t_neurone *e1, t_neurone *e2, t_neurone *e3)
{
	int i;

	i = 0;
	if (etage == 1)
	{
		while (i < 11)
		{
			e1[i].links = ft_init_link(etage);
			ft_set_links(e1[i].links, e2, etage);
			e1[i].f = &ft_id;
			i++;
		}
	}
	else if (etage == 2)
	{
		while (i < 4)
		{
			e2[i].links = ft_init_link(etage);
			e1[i].f = &ft_squish;
			i++;	
		}
		
	}
	else if (etage == 3)
	{
		e3[i].links = ft_init_link(etage);
		e1[i].f = &ft_choose;
	}
	else
		return ;
}

t_neurone	*ft_init(int mode, double *poids)
{
	t_neurone	*e1;
	t_neurone	*e2;
	t_neurone	*e3;
	int		i;
	int		j;
	t_data 		*data;

	if (((!(e1 = (t_neurone*)malloc(sizeof(t_neurone) * 12))) ||
		(!(e2 = (t_neurone*)malloc(sizeof(t_neurone) * 5))) ||
		(!(e3 = (t_neurone*)malloc(sizeof(t_neurone) * 2)))))
		return (NULL);
	i = 1;
	j = 0;
	data = ft_set_data(data);
	while (i < 4)
	{

		ft_set_network(i, e1, e2, e3);
		i++;
	}
	poids = ft_set_weight(mode, e1, poids);
	printf("double de fin = %f\n", ft_run(e1, data));
	printf("ici\n");
	return (e1);
}
