/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:22:13 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/21 10:25:46 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

int	is_valid(int grid[4][4], int row, int col, int num);
int	count_visible(int *line);
int	check_views(int grid[4][4], int *views);
int	solve(int grid[4][4], int row, int col, int *views);

#endif
