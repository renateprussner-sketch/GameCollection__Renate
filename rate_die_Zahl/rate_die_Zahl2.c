/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rate_die_Zahl2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprussne <rprussne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:42:41 by rprussne          #+#    #+#             */
/*   Updated: 2026/06/20 09:05:53 by rprussne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int	geheimzahl;
	int	tipp;
	int	leben;

	srand(time(NULL));
	printf("willkommen zu Rate die Zahl 2!\n");
	printf("Rate eine Zahl zwischen 1 und 10: ");

	char	antwort;
	antwort = 'j';

	while(antwort == 'j')
	{
		leben = 3;
		geheimzahl = rand() % 10 + 1;
	
		while(leben > 0)
		{
			printf("Tipp: ");
			scanf("%d", &tipp);
			
			if (tipp == geheimzahl)
			{
				printf("Gewonnen!\n");
				break;
			}
			if (leben == 0)
			{
				printf("Verloren! Die Zahl war %d\n", geheimzahl);
			}
			else
			{
				printf("Falsch! Leben: %d\n", leben);
				leben--;
			}
		}
		printf("Nochmal spielen? (j/n): ");
		scanf(" %c", &antwort);
	}
}
