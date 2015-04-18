/*===========================================================================
  Cancella lo schermo.
----------------------------------------------------------------------------*/
void Clrscr (void)
{
	COORD coord;
	DWORD written;
	CONSOLE_SCREEN_BUFFER_INFO info;

	coord.X = 1;
	coord.Y = 1;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	FillConsoleOutputCharacter (GetStdHandle(STD_OUTPUT_HANDLE), ' ',
					  info.dwSize.X * info.dwSize.Y, coord, &written);
	Gotoxy (1, 1);
}

/*===========================================================================
  Posiziona il cursore di console alle coordinate x,y.
----------------------------------------------------------------------------*/
void Gotoxy
(   int x,         // indice di colonna
	int y          // indice di riga
)
{	COORD Cur = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

/*===========================================================================
 Utilizzando la funzione SetConsoleTextAttribute(HANDLE,WORD)
 cambia il colore del testo da stampare in console.
----------------------------------------------------------------------------*/
void TextColor
(	unsigned short Colore    // codice numerico del colore
)
{   HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute ( h, Colore );
}
