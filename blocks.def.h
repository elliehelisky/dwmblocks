// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    {"^c#ffc000^ ", "/home/elh/.config/custom-scripts/weather.sh", 30, 0},
    {"^c#2986cc^ ", "pamixer --get-volume", 1, 0},
    {"^c#93c47d^ ", "free -h | awk '/^Mem/ { print $3\"/\" $2 }' | sed s/i//g",
     1, 0},
    {"^c#c27ba0^", "date '+%b %d (%a) %I:%M%p'", 5, 0},
    /*  {"Kernel: ", "uname -r", 0, 0}, */

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
