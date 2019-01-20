#include "rn.h"

void	ft_train(void)
{
	double		**poids;
	t_neurone 	*net;
	int		fit;
	t_data		*popu;
	int		i;
	int		j;

	if (!(poids = (double**)malloc(sizeof(double*) * 100)))
		return ;
	if (!(popu = (t_data*)malloc(sizeof(t_data) * 100)))
		return ;
	i = 0;
	j = 0;
	while (i < 100)
	{
		if (!(poids[i] = (double*)malloc(sizeof(double) * 37)))
			return ;
		i++;
	}
	net = ft_init(2, poids[0]);
	popu = ft_init_popu(popu);
	i = 0;
	fit = ft_taux(popu, net);
	printf("premier taux = %d", fit);
	/*while (fit < 50)
	{
		
	}*/
}
