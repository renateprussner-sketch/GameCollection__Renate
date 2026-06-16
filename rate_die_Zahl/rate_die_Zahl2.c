 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rate_die_Zahl2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprussne <rprussne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:42:41 by rprussne          #+#    #+#             */
/*   Updated: 2026/06/16 09:13:56 by rprussne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int geheimzahl = rand() % 10 + 1;
    int tipp;

    printf("willkommen zu Rate die Zahl 2!\n");
    printf("Rate eine Zahl zwischen 1 und 10: ");

    scanf("%d", &tipp);

    if (tipp == geheimzahl)
        printf("Gewonnen!\n");
    else
        printf("Leider falsch! Die Zahl war %d\n", geheimzahl);

    return(0);
}
