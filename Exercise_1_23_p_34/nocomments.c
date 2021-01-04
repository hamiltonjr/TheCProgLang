#include "nocomments.h"

/* This code eliminates comments. */
 
int main()
{
    // counter
    register size_t i = 0;

    // status control
    bool    in_comment = false,
            in_line_comment = false,
            in_quotes = false,
            in_single_quotes = false;

    // characters
    int c = 0, p = 0;

    // line buffer
    char line[MAXLINE];

    // program loop
    while ((c = getchar()) != EOF)
    {
        // only in this cases put character in line to be printed
        if (!in_line_comment && !in_comment && in_quotes)
        {
            line[i++] = c;
        }

        // alternate in double quotes state
        if (c == '"' && !in_comment && !in_line_comment && !in_quotes)
        {
            in_quotes = !in_quotes;
        }

        // alternate in single quotes state
        if ((c == '\'' && !in_comment && !in_line_comment && !in_quotes && !in_single_quotes) || p == '\\')
        {
            in_single_quotes = !in_single_quotes;
        }

        // detect double slashes (one-line comment)
        if (c == '/' && p == '/' && !in_quotes && !in_single_quotes)
        {
            in_line_comment = true;
            i -= 2;
        }

        // detect <ENTER> in line comment (ends line comment)
        if (in_line_comment && c == '\n' && !in_quotes && !in_single_quotes)
        {
            in_line_comment = false;
        }
        
        // detect slash-asterisk (begins comment)
        if (c == '*' && p == '/' && !in_quotes && !in_single_quotes)
        {
            in_comment = true;
            i -= 2;
        }

        // detect asterisk-slash (ends comment)
        if (c == '/' && p == '*' && !in_quotes && !in_single_quotes)
        {
            in_comment = false;
            i -= 2;
        }

        // detect <ENTER> (ends line)
        if (c == '\n')
        {
            line[i] = '\0';
            printf("%s", line);
            i = 0;
        }

        p = c;
    }

    // the end
    return EXIT_SUCCESS;
}
