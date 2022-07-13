#include <stdlib.h>
/* user and group to drop privileges to */
static const char *user  = "nova";
static const char *group = "nova";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const char messages[8][80] = {
        "I use arch btw.", 
        "Suckless: Software that sucks less.",
        "I bet you can't figure out how to unlock me :)",
        "password or password1234 is a bad password!",
        "Security through obsurity is not Security.",
        "Han shot first!",
        "Theres no language better than Holy C I think...",
        "\"If it's been written in C/C++\n\nre-write it in rust!\"\n\n\t - Some rust programmer",
};

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-courier-bold-r-normal--34-240-100-100-m-200-iso8859-15";
