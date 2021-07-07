<div align=center>

***holbertonschool-low_level_programming***
<hr />
 <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logoC.svg" alt="Logo C" height="120" style="max-width:80%;">
 <hr />
<a href="https://twitter.com/Jepez90"><img src="https://img.shields.io/twitter/url?label=%40Jepez90&style=social&url=https%3A%2F%2Ftwitter.com%2FJepez90" alt="Logo Twitter">&nbsp;</a>
<a href="https://www.linkedin.com/in/jerson-p%C3%A9rez-010059a4/"><img src="https://img.shields.io/badge/jepez90-%230077B5.svg?&logo=linkedin&logoColor=white" alt="Logo LinkedIn">&nbsp;</a>
<img src="https://img.shields.io/badge/jepez90-white?style=flat&logo=gmail" alt="Logo Gmail">&nbsp;
<a href="https://twitter.com/HolbertonCOL"><img src="https://img.shields.io/badge/Holberton_School-red" alt="Logo Holberton">&nbsp;</a>

<a href="https://github.com/jepez90"><img src="https://visitor-badge.glitch.me/badge?page_id=jepez90.lowlevel.0x1C" alt="badget visitors"></a>
</div>


# Project: 0x18. C - Dynamic libraries

> Excercises about:
    What are make, Makefiles.
    When, why and how to use Makefiles.
    What are rules and how to set and use them.
    What are explicit and implicit rules.
    What are the most common / useful rules.
    What are variables and how to set and use them.


## Files in this Folder:

* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **0-Makefile**<br />
Makefile with a rule ***all*** that builds your executable

* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **1-Makefile**<br />
Makefile with a rule ***all*** that builds your executable using variables: CC, SRC
    * CC: the compiler to be used
    * SRC: the .c files


* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **2-Makefile**<br />
builds your executable using variables: CC, SRC, OBJ, NAME
    * CC: the compiler to be used
    * SRC: the .c files
    * OBJ: the .o files
    * NAME: the name of the executable


* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **3-Makefile**<br />
Makefile with the follow rules: all, clean, oclean, fclean, re
    * **all**: builds your executable
    * **clean**: deletes all Emacs and Vim temporary files along * with the executable
    * **oclean**: deletes the object files
    * **fclean**: deletes all Emacs and Vim temporary files, the * executable, and the object files
    * **re**: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM
    * **CC**: the compiler to be used
    * **SRC**: the .c files
    * **OBJ**: the .o files
    * **NAME**: the name of the executable
    * **RM**: the program to delete files

* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logo_shell.svg" alt="Logo Shell" height="15"> **4-Makefile**<br />
Makefile with the follow rules: all, clean, oclean, fclean, re
    * **all**: builds your executable
    * **clean**: deletes all Emacs and Vim temporary files along * with the executable
    * **oclean**: deletes the object files
    * **fclean**: deletes all Emacs and Vim temporary files, the * executable, and the object files
    * **re**: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM
    * **CC**: the compiler to be used
    * **SRC**: the .c files
    * **OBJ**: the .o files
    * **NAME**: the name of the executable
    * **RM**: the program to delete files
    * **CFLAGS**: your favorite compiler flags: ***-Wall -Werror -Wextra -pedantic***


* <img src="https://raw.githubusercontent.com/jepez90/jepez90.github.io/master/img/Readme_media/logoPythonBasic.svg" alt="Logo Python" height="15"> **5-island_perimeter.py**<br />
Function ***def island_perimeter(grid):*** that returns the perimeter of the island described in grid:
    * ***grid*** is a list of list of integers:
        * ***0*** represents a water zone
        * ***1*** represents a land zone
        * One cell is a square with side length 1
        * Grid cells are connected horizontally/vertically (not diagonally).
        * Grid is rectangular, width and height don’t exceed 100
        * Grid is completely surrounded by water, and there is one island (or nothing).
        * The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
