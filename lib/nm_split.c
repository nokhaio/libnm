/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static size_t get_count_tokens(char const *s, char c)
{
	size_t counts = 0;

	if (!s)
		return 0;

	while (*s) {
		while (*s && *s == c)
			s++;

		if (*s)
			counts++;

		while (*s && *s != c)
			s++;
	}
	return counts;
}

static void tokenize(char *copy, char c, char **arr, size_t tokens)
{
	size_t i = 0;

	while (*copy && i < tokens) {
		while (*copy && *copy == c)
			*(copy++) = '\0';

		if (*copy)
			arr[i] = copy;
		while (*copy && *copy != c)
			copy++;
		i++;
	}
}

static void free_all(char **arr, size_t len)
{
	size_t i = 0;
	while (i < len) {
		free(arr[i]);
	}
	free(arr);
}

char **nm_split(char const *s, char c)
{
	char **arrs = NULL;
	size_t tokens = 0;
	size_t i = 0;
	size_t len = 0;

	if (!s)
		return NULL;

	tokens = get_count_tokens(s, c);

	arrs = malloc(sizeof(char *) * (tokens + 1));
	if (!arrs)
		return NULL;
	arrs[tokens] = NULL;

	while (*s && i < tokens) {
		while (*s && *s == c)
			s++;
		if (!*s)
			break;

		len = 0;
		while (s[len] && s[len] != c)
			len++;

		arrs[i] = nm_substr(s, 0, len);
		if (!arrs[i]) {
			free_all(arrs, i);
			return NULL;
		}
		s += len;
		i++;
	}

	return arrs;
}

char **nm_splitx(char const *s, char c)
{
	char **arrs = NULL;
	char  *copy = NULL;
	size_t tokens = 0;

	if (!s)
		return NULL;

	tokens = get_count_tokens(s, c);

	arrs = malloc(sizeof(char *) * (tokens + 1));
	if (!arrs)
		return NULL;

	arrs[tokens] = NULL;

	if (!tokens)
		return arrs;
	while (*s && *s == c)
		s++;
	copy = nm_strdup(s);
	if (!copy) {
		free(arrs);
		return NULL;
	}
	tokenize(copy, c, arrs, tokens);
	return arrs;
}
