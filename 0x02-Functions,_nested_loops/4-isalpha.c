/**
 * _isalpha - check if a character is alphabetic.
 *
 * @c: integer to be tested.
 * Return: 1 if c is ,lphabetic 0 oterwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);


}
