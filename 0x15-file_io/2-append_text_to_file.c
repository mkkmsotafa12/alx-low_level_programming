#include "main.h"

/**
 * append_text_to_file - add text to an already existing file
 *
 * @filename: the name of the file to append content to
 * @text_content: THE CONTENT TO BE APPENDED TO THE FILE
 *
 * Return: 1 on success and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fb;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fb = open(filename, O_WRONLY | O_APPEND);

		if (fb == -1)
			return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(fb, text_content, letters);

		if (rwr == -1)
			return (-1);
	}
	close(fb);

	return (1);
}
