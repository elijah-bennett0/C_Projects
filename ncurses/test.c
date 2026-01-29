#include <ncurses.h>

int main() {

	initscr();

	WINDOW* win = newwin(LINES, COLS, 0, 0);

	box(win, 0, 0);	
	mvwprintw(win, LINES/2, (COLS/2)-6, "BOX TEST");

	refresh();
	wrefresh(win);

	getch();
	endwin();

	initscr();

	WINDOW* win2 = newwin(LINES, COLS, 0, 0);
	box(win2, 0, 0);

	mvwprintw(win2, LINES/2, (COLS/2)-6, "SECOND TEST");
	refresh();
	wrefresh(win2);
	getch();
	endwin();

	return 0;

}
