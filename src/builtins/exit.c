/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:56:53 by raalonso          #+#    #+#             */
/*   Updated: 2024/03/30 10:15:17 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

/**
 * The function `ft_exit_atoi` converts a string to an integer while handling
 * signs and error cases.
 * 
 * @param str The function `ft_exit_atoi` takes a string `str` as input and
 * converts it to an integer.
 * 
 * @return The function `ft_exit_atoi` is returning the result of the conversion
 * of the input string to an integer value, taking into account any sign
 * specified in the string. If the input string is a valid integer, the function
 * returns the integer value modulo 256. If the input string is not a valid
 * integer, an error message is printed to stderr and function returns 255.
 */
static int	ft_exit_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(str[i]))
		result = result * 10 + (str[i++] - '0');
	if (str[i] || i == 0)
	{
		ft_fprintf(STDERR_FILENO, "minishell: exit: %s: ", str);
		ft_fprintf(STDERR_FILENO, "numeric argument required\n");
		return (255);
	}
	return ((result * sign) % 256);
}

/**
 * is used to handle the exit command in a shell program, allowing the user to
 * exit the shell with a specified exit status.
 * 
 * @param shell a pointer to a `t_shell` struct.
 * @param args args is a pointer to an array of strings, where each string
 * represents a command-line argument passed to the shell.
 * 
 * @return on success is exiting the program with the exit status sent by the
 * user. if there are too many arguments the program does not exit and
 * 1 is returned. If there is only one argument the program exits with the
 * status code of (number % 256). If the argument sent is not a number an error
 * is typed and the programs exits with a 255 status code.
 */
int	ft_exit(t_shell *shell, char **args, int args_count)
{
	if (shell->n_cmds == 1)
		ft_putstr_fd("exit\n", STDERR_FILENO);
	if (args_count == 0)
		clean_exit(shell, EXIT_SUCCESS);
	else if (args_count > 1)
		ft_putstr_fd("minishell: exit: too many arguments\n", STDERR_FILENO);
	else
	{
		shell->exit_status = ft_exit_atoi(args[0]);
		clean_exit(shell, shell->exit_status);
	}
	return (EXIT_FAILURE);
}
