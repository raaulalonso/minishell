/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:34:54 by raalonso          #+#    #+#             */
/*   Updated: 2024/04/05 10:06:22 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

/**
 * Checks if a character is a valid character for an enviroment variable name.
 *
 * @param c The character to check.
 * @return true if the character is alphanumeric or an underscore,
 * false otherwise.
 */
bool	isvalidchar(char c)
{
	return (ft_isalnum(c) || c == '_' || c == '"');
}

/**
 * Checks if a character is a special character.
 *
 * @param c The character to check.
 * @return true if the character is a special character, false otherwise.
 */
bool	is_special_char(char c)
{
	return (c == ' ' || c == '|' || c == '>' || c == '<' \
						|| c == '"' || c == '\'');
}

/**
 * Checks if a character is a special character.
 *
 * @param c The character to check.
 * @return true if the character is a special character, false otherwise.
 */
bool	is_special_char_two(char c)
{
	return (c == ' ' || c == '|' || c == '>' || c == '<');
}

/**
 * Adds double quotes to the given token.
 * 
 * @param token - The token to add quotes to.
 */
void	put_quotes(char **token, int j)
{
	char	*aux;

	aux = ft_strjoin("\"", token[j]);
	if (!aux)
		exit(1);
	free(token[j]);
	token[j] = ft_strjoin(aux, "\"");
	if (!token)
		exit(1);
	free(aux);
}
