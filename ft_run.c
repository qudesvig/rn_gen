#include "rn.h"

void	ft_tree(int *pg, int *pf, int g, int f, int act, int nbg, int nbf, char sex)
{
	if (sex == 'G')
		nbg += 1;
	else if (sex == 'F')
		nbf += 1;
	if (act < g + f + 1)
	{
		ft_tree(pg, pf, g, f, act + 1, nbg, nbf, 'F');
		ft_tree(pg, pf, g, f, act + 1, nbg, nbf, 'G');
	}
	else
	{
		if (nbg >= g && nbf >= f)
		{
			if (nbg > g)
				*pg += 1;
			else	
				*pf += 1;
		}
	}
}

double	ft_solve(int g, int f)
{
	double	proba;
	int	probg;
	int	probf;

	probg = 0;
	probf = 0;
	ft_tree(&probg, &probf, g, f, 0, 0, 0, ' ');
	proba = (double)probg / (double)(probf + probg);
	return (proba);

}

t_data	*ft_set_data(t_data *data)
{
	data->a = 190;
	data->b = 0.20;
	data->c = 1;
	data->d = 2;
	data->e = 1;
	data->f = 1;
	data->g = ft_solve(0, 2);
	data->h = 1;
	data->i = 0.2;
	data->j = 1;
}

double	ft_fire(t_neurone *e1)
{
	t_neurone	*tmp;
	t_lien		*tmp2;
	double 		res;
	int		i;

	i = 0;
	res = 0;
	while (i < 11)
	{
		e1[i].output = e1[i].f(e1[i].input);
		printf("input %f\n", e1[i].input);
		i++;
	}
	return (res);
}

int	ft_run(t_neurone *e1, t_data *data)
{
	int	res;
	t_neurone *tmp;
	t_lien		*tmp2;

	res = -1;
	e1[0].input = data->a;	
	e1[1].input = data->b;	
	e1[2].input = data->c;	
	e1[3].input = data->d;	
	e1[4].input = data->e;	
	e1[5].input = data->f;	
	e1[6].input = data->g;	
	e1[7].input = data->h;	
	e1[8].input = data->i;	
	e1[9].input = data->j;	
	e1[10].input = 1;	
	tmp2 = e1[0].links;
	tmp = tmp2[0].out;
	tmp[3].input = 1;
	res = (int)ft_fire(e1);
	return (res);
}
