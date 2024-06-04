#include <ncurses.h>

int main() {

	initscr();

	WINDOW* win = newwin(LINES, COLS, 0, 0);

	box(win, 0, 0);	
	mvwprintw(win, 1, 1, "BOX TEST");

	refresh();
	wrefresh(win);

	getch();
	endwin();

	return 0;

}
