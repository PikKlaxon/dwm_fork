/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#0a0a0a",   /* after initialization */
    [INPUT] = "#0ea5e9",  /* during input */
    [FAILED] = "#f43f5e", /* wrong password */
    [CAPS] = "#6366f1",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
