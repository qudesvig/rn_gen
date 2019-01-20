#ifndef RN_H
# define RN_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <math.h>

typedef	struct s_lien t_lien;

typedef struct	neurone
{
	double	(*f)(double);
	double	input;
	double	output;
	t_lien	*links;
}	t_neurone;

typedef struct	s_data
{
	double	a;
	double	b;
	double	c;
	double	d;
	double	e;
	double	f;
	double	g;
	double	h;
	double	i;
	double	j;
	double	sex;
}		t_data;

struct	s_lien
{
	double		poids;
	double		input;
	double		output;
	t_neurone	*out;
};

t_neurone*	ft_init(int mode, double *poids);
t_data		*ft_init_popu(t_data *pop);

t_data		*ft_set_data(t_data *data);

void		ft_train(void);

double		ft_id(double nb);
double		ft_squish(double nb);
double		ft_choose(double nb);
#endif
