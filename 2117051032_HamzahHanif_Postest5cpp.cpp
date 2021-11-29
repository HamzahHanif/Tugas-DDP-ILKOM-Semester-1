#include <ncurses.h>
using namespace std;

int main(){
	initscr();
	mvprintw(10,25,"Hamzah Hanif");
	
	refresh();
	getch();
	endwin();
	
	return 0;
}
