#include "rn.h"

t_data	*ft_init_popu(t_data *data)
{
	int i;

	i = 0;
	while (i < 100)
	{
		data[i].a = (rand()%(1000*(1 - 2) + 2))/1000.1;
		data[i].b = (rand()%(1000*(0 - 1) + 1))/1000.0;
		data[i].c = (((rand()%(1000*(0 - 1) + 1))/1000.0) > 0.5) ? 1 : 0;
		data[i].d = (rand()%(1000*(0 - 2) + 2))/1000.0;
		data[i].e = (rand()%(1000*(0 - 1) + 1))/1000.0;
		data[i].f = (((rand()%(1000*(0 - 1) + 1))/1000.0) > 0.5) ? 1 : 0;
		data[i].g = ft_solve((rand()%(1000*(0 - 5) + 5))/1000.0,
				((rand()%(1000*(0 - 5) + 5))/1000.0));
		data[i].h = (rand()%(1000*(0 - 1) + 1))/1000.0;
		data[i].i = (rand()%(1000*(0 - 1) + 1))/1000.0;
		data[i].j = (rand()%(1000*(0 - 1) + 1))/1000.0;
		data[i].sex = (((rand()%(1000*(0 - 1) + 1))/1000.0) > 0.5) ? 1 : 0;
		i++;
	}
	return (data);
}

int	ft_taux(t_data *pop, t_neurone *net)
{
	int ret;
	int i;
	double tmp;

	i = 0;
	ret = 0;
	while (i < 100)
	{
		tmp = ft_run(net, pop[i]);
		if (tmp == pop[i].sex)
			ret++;
		i++;
	}
	return (ret);
}
