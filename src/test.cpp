#include "dohello.h"
#include <stdio.h>
#include "haha.h"
#include <elog.h>
int main(int argc, char *argv[])
{
    /* setbuf(stdout,NULL); */
    /* elog_init(); */
    /* elog_set_fmt(ELOG_LVL_ASSERT,ELOG_FMT_ALL); */
    /* elog_start(); */

    /* log_a("xxxxx"); */


    setbuf(stdout, NULL);
    /* initialize EasyLogger */
    elog_init();
    /* elog_file_init(); */
    /* set EasyLogger log format */
    elog_set_fmt(ELOG_LVL_ASSERT, ELOG_FMT_ALL);
    elog_set_fmt(ELOG_LVL_ERROR, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
    elog_set_fmt(ELOG_LVL_WARN, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
    elog_set_fmt(ELOG_LVL_INFO, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
    elog_set_fmt(ELOG_LVL_DEBUG, ELOG_FMT_ALL & ~ELOG_FMT_FUNC);
    elog_set_fmt(ELOG_LVL_VERBOSE, ELOG_FMT_ALL & ~ELOG_FMT_FUNC);
#ifdef ELOG_COLOR_ENABLE
    elog_set_text_color_enabled(true);
#endif
    /* start EasyLogger */
    elog_start();

    log_a("hellowWWWW");


    printf("lelloxxxx");
    log();
    haha();
    log_a("hellowWWWW");
    return 0;
}

