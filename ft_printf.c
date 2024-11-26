/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:39:52 by vluo              #+#    #+#             */
/*   Updated: 2024/11/26 11:47:37 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pr_char(t_list *f, int *pr_length, int *cpt)
{
	*pr_length = *pr_length + 1;
	if ((char *) get_content(f, *cpt) == 0)
	{
		ft_putchar_fd(0, 1);
		*cpt = *cpt + 1;
		return ;
	}
	ft_putstr_fd((char *)get_content(f, *cpt), 1);
	*cpt = *cpt + 1;
}

static void	pr_p(t_list *f, int *pr_length, int *cpt)
{
	if (ft_strncmp((const char *) get_content(f, *cpt), "(nil)", 5) == 0)
	{
		ft_putstr_fd((char *) get_content(f, *cpt), 1);
		*pr_length = *pr_length + 5;
		*cpt = *cpt + 1;
		return ;
	}
	ft_putstr_fd((char *)get_content(f, *cpt), 1);
	*pr_length = *pr_length + ft_strlen((char *)get_content(f, *cpt));
	*cpt = *cpt + 1;
}

static int	pr_conversion(const char *format,
							t_list *f, int *pr_length, int *cpt)
{
	int	chr;

	chr = strschr(&format[1], "cspdiuxX%");
	if (format[chr + 1] == '%')
	{
		ft_putchar_fd('%', 1);
		*pr_length += 1;
		*cpt = *cpt + 1;
	}
	if (chr != 0 && format[chr + 1] != '%')
	{
		*pr_length += pr_flag(format, f, cpt);
		return (chr);
	}
	if (format[chr + 1] == 'c')
		pr_char(f, pr_length, cpt);
	if (format[chr + 1] == 'p')
		pr_p(f, pr_length, cpt);
	if (in_str("sdiuxX", format[chr + 1]) != -1)
	{
		ft_putstr_fd((char *) get_content(f, *cpt), 1);
		*pr_length += ft_strlen((const char *)get_content(f, *cpt));
		*cpt = *cpt + 1;
	}
	return (chr);
}

void	pr_format(const char *format, t_list *f, int *pr_length)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 1;
	while (i < (int)ft_strlen(format))
	{
		if (format[i] == '%')
			i += pr_conversion(&format[i], f, pr_length, &cpt) + 2;
		else
		{
			ft_putchar_fd(format[i ++], 1);
			*pr_length += 1;
		}
	}
	return ;
}

int	ft_printf(const char *format, ...)
{
	t_list	*f;
	va_list	args;
	int		pr_length;

	va_start(args, format);
	pr_length = 0;
	f = ft_format(format, args);
	pr_format(format, f, &pr_length);
	ft_lstclear(&f, free);
	va_end(args);
	return (pr_length);
}
