#ifndef LINE_H
#define LINE_H

//  Clears the current line.
void clear_line(void);

// Adds word to the end of the current line.
// If this is not the first word on the line,
// puts one space before word.
void add_word(const char *word);

/*
 * Returns the number of characters left in
 * the current line.
 */
int space_remaining(void);

/*
 * Writes the current line with justification.
 */
void write_line(void);

// Writes the current line without justification.
// If the line is empty, does nothing.
void flush_line(void);

#endif // !LINE_H
