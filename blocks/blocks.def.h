//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{" ", "date '+(%a) %b %d %I:%M'",					60,		0},
        {"volume:",     "/home/machi/.suckless/blocks/volume.sh",               0,     10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";
