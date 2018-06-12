/* user and group to drop privileges to */
static const char *user  = "moritz";
static const char *group = "moritz";

static const char *colorname[NUMCOLS] = {
	"#333333",     /* after initialization */
	"#0085df",   /* during input */
	"#fc4f30",   /* wrong password */
};

/* treat a cleared input like a wrong password */
static const int failonclear = 1;
