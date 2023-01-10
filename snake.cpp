#include <iostream>
#include <conio.h>
#include <windows.h>

// D�finir les dimensions de la grille
const int WIDTH = 20;
const int HEIGHT = 20;

// D�finir la position de d�part de la t�te du serpent
int x = WIDTH / 2;
int y = HEIGHT / 2;

// D�finir la direction du serpent
int direction = 0; // 0 = droite, 1 = haut, 2 = gauche, 3 = bas

// D�finir la queue du serpent
int tailX[100];
int tailY[100];
int tailLength = 0;

// D�finir la position de la pomme
int appleX;
int appleY;

// Fonction pour d�placer le serpent
void Move()
{
	// Enregistrer la position actuelle de la queue
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < tailLength; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
    switch (direction)
    {
    case 0:
        x++;
        break;
    case 1:
        y--;
        break;
    case 2:
        x--;
        break;
    case 3:
        y++;
        break;
    }

    // G�rer les collisions avec les bords de la grille
    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    // V�rifier si le serpent mange une pomme
    if (x == appleX && y == appleY)
    {
        // Incr�menter la longueur de la queue
        tailLength++;

        // Choisir une nouvelle position al�atoire pour la pomme
        appleX = rand() % WIDTH;
        appleY = rand() % HEIGHT;
    }

    // V�rifier si le serpent se mord la queue
    for (int i = 0; i < tailLength; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
        {
            // R�initialiser le serpent et la pomme
            x = WIDTH / 2;
            y = HEIGHT / 2;
            direction = 0;
            tailLength = 0;
            appleX = rand() % WIDTH;
            appleY = rand() % HEIGHT;
        }
    }