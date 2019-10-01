/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:29:08 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/25 12:29:09 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	leftd;
	int rightd;

	if (root == NULL)
		return (0);
	else
	{
		leftd = btree_level_count(root->left);
		rightd = btree_level_count(root->right);
		if (leftd < rightd)
			return (rightd + 1);
		else
			return (leftd + 1);
	}
}
