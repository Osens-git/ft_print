/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_point.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:18:37 by vluo              #+#    #+#             */
/*   Updated: 2024/11/26 16:15:02 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	point_s(int precision, t_list *f, int *cpt)
{
	int		length_res;	
	char	*res;

	length_res = ft_strlen((char *) get_content(f, *cpt));
	if (precision >= length_res)
	{
		ft_putstr_fd((char *) get_content(f, *cpt), 1);
		*cpt = *cpt + 1;
		return (length_res);
	}
	res = ft_substr((char *) get_content(f, *cpt), 0, precision);
	ft_putstr_fd(res, 1);
	free(res);
	*cpt = *cpt + 1;
	return (precision);
}

static int	point_di(int precision, t_list *f, int *cpt)
{
	char	*res;

	res = (char *) get_content(f, *cpt);
	*cpt += 1;
	if (res[0] == '-')
	{
		if (precision <= (int)ft_strlen(res) - 1)
		{
			ft_putstr_fd(res, 1);
			return (ft_strlen(res));
		}
		ft_putchar_fd('-', 1);
		ft_putzer(precision - ((int)ft_strlen(res) - 1));
		ft_putstr_fd(&res[1], 1);
		return (precision + 1);
	}
	if (precision <= (int)ft_strlen(res))
	{
		ft_putstr_fd(res, 1);
		return (ft_strlen(res));
	}
	ft_putzer(precision - (int)ft_strlen(res));
	ft_putstr_fd(res, 1);
	return (precision);
}

static int	point_str(int precision, t_list *f, int *cpt)
{
	int	length_res;

	length_res = ft_strlen((char *) get_content(f, *cpt));
	if (precision <= length_res)
	{
		ft_putstr_fd((char *) get_content(f, *cpt), 1);
		*cpt += 1;
		return (length_res);
	}
	ft_putzer(precision - length_res);
	ft_putstr_fd((char *) get_content(f, *cpt), 1);
	*cpt += 1;
	return (precision);
}

static int	point_x(int precision, t_list *f, int *cpt)
{
	char	*res;

	res = (char *) get_content(f, *cpt);
	*cpt += 1;
	if (precision == 0 && res[0] == '0')
		return (0);
	if (precision <= (int)ft_strlen(res))
	{
		ft_putstr_fd(res, 1);
		return ((int)ft_strlen(res));
	}
	ft_putzer(precision - (int)ft_strlen(res));
	ft_putstr_fd(res, 1);
	return (precision);
}

int	flag_point(const char *format, t_list *f, int *cpt)
{
	int	chr;

	chr = strschr(&format[1], "cspdiuxX%");
	if (format[chr + 1] == 'c')
	{
		if ((char *) get_content(f, *cpt) == 0)
			ft_putchar_fd(0, 1);
		else
			ft_putstr_fd((char *)get_content(f, *cpt), 1);
		*cpt = *cpt + 1;
		return (1);
	}
	if (format[chr + 1] == 's')
		return (point_s(ft_atoi(&format[1]), f, cpt));
	if (format[chr + 1] == 'd' || format[chr + 1] == 'i')
	{
		if (!(((char *)get_content(f, *cpt))[0] == '0'
			&& ft_atoi(&format[1]) == 0))
			return (point_di(ft_atoi(&format[1]), f, cpt));
		*cpt += 1;
		return (0);
	}
	if (format[chr + 1] == 'x' || format[chr + 1] == 'X')
		return (point_x(ft_atoi(&format[1]), f, cpt));
	return (point_str(ft_atoi(&format[1]), f, cpt));
}
