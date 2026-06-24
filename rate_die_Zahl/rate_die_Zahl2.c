/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rate_die_Zahl2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprussne <rprussne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:42:41 by rprussne          #+#    #+#             */
/*   Updated: 2026/06/24 10:44:02 by rprussne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int	main(void)
{
	int	geheimzahl;
	int	tipp;
	int	leben;

	srand(time(NULL));
	write(1, "Willkommen zu Rate die Zahl 2!\n", 31);
	write(1, "Rate eine Zahl zwischen 1 und 10: ", 34);

	char	antwort;
	antwort = 'j';

	while(antwort == 'j')
	{
		leben = 3;
		geheimzahl = rand() % 10 + 1;
	
		while(leben > 0)
		{
			write(1, "Tipp: ", 6);
			scanf("%d", &tipp);
			
			if (tipp == geheimzahl)
			{
				write(1, "Gewonnen!\n", 10);
				break;
			}
			leben--;
			if (leben == 0)
			{
				write(1, "Verloren!\n", 10);
				write(1, "Die Zahl war: ", 14);
				if (geheimzahl == 10)
				{
					write(1, "10\n", 3);
				}
				else
				{
					char	zahl;

					zahl = geheimzahl + '0';
					write(1, &zahl, 1);
					write(1, "\n", 1);
				}
			}
			else
			{
				char	zahl;

				zahl = leben + '0';
				write(1, "Falsch Leben: ", 15);
				write(1, &zahl, 1);
				write(1, "\n", 1);
			}
		}
		write(1, "Nochmal spielen? (j/n): ", 24);
		scanf(" %c", &antwort);
	}
}
