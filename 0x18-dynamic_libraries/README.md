<div align=center>

***holbertonschool-low_level_programming***
<hr />
 <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logoC.svg" alt="Logo C" height="120" style="max-width:80%;">
 <hr />
<a href="https://twitter.com/Jepez90"><img src="https://img.shields.io/twitter/url?label=%40Jepez90&style=social&url=https%3A%2F%2Ftwitter.com%2FJepez90" alt="Logo Twitter">&nbsp;</a>
<a href="https://www.linkedin.com/in/jerson-p%C3%A9rez-010059a4/"><img src="https://img.shields.io/badge/jepez90-%230077B5.svg?&logo=linkedin&logoColor=white" alt="Logo LinkedIn">&nbsp;</a>
<img src="https://img.shields.io/badge/jepez90-white?style=flat&logo=gmail" alt="Logo Gmail">&nbsp;
<a href="https://twitter.com/HolbertonCOL"><img src="https://img.shields.io/badge/Holberton_School-red" alt="Logo Holberton">&nbsp;</a>

<a href="https://github.com/jepez90"><img src="https://visitor-badge.glitch.me/badge?page_id=jepez90.lowlevel.0x18&" alt="badget visitors"></a>
</div>


# Project: 0x18. C - Dynamic libraries

> Excercises about:
What is a dynamic library, how does it work, how to create one, and how to use it, what is the environment variable ***$LD_LIBRARY_PATH*** and how to use it, what are the differences between static and shared libraries.

## Files in this Folder:

* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_code_file.svg" alt="Logo Code" height="16"> **holberton.h**<br />
Library with the function protoypes.


* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_code_file.svg" alt="Logo Code" height="16"> **libholberton.so**<br />
Create the dynamic library libholberton.so containing all the functions listed below:
```c
- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);
```


* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **1-create_dynamic_lib.sh**<br />
Script that creates a dynamic library called ***liball.so*** from all the ***.c*** files that are in the current directory.

* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_code_file.svg" alt="Logo Code" height="16"> **100-operations.so**<br />
I know, you&rsquo;re missing C when coding in Python. So let&rsquo;s fix that!
Create a dynamic library that contains C functions that can be called from Python. See example for more detail.


* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **101-make_me_win.sh**<br />
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?










