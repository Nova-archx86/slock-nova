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

// messages are instead generated randomly defined in writemessage();
// static const char * message = messages[rn];

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-courier-bold-r-normal--34-240-100-100-m-200-iso8859-15";
