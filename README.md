# minishell

[![Intro](https://img.shields.io/badge/Cursus-Minishell-success?style=for-the-badge&logo=42)](https://github.com/raaulalonso/minishell)
 
[![Stars](https://img.shields.io/github/stars/raaulalonso/minishell?color=ffff00&label=Stars&logo=Stars&style=?style=flat)](https://github.com/raaulalonso/minishell)
[![Size](https://img.shields.io/github/repo-size/raaulalonso/minishell?color=blue&label=Size&logo=Size&style=?style=flat)](https://github.com/raaulalonso/minishell)
[![Activity](https://img.shields.io/github/last-commit/raaulalonso/minishell?color=red&label=Last%20Commit&style=flat)](https://github.com/raaulalonso/minishell)
 
As beautiful as a shell. This project aims to create a minimal shell that can interpret and execute basic Unix operating system commands. GNU Bash 3.2 has been taken as a reference, as it is the default version on macOS for 42Madrid computers.

This recreation of Bash supports redirections (<, >, <<, >>), pipes ( | ), single and double quotes, environment variables expansion and signals such as CTRL-D, CTRL-C and CTRL-\\. Also, we had to recreate as Builtin this list of commands: echo (with -n option), cd, pwd, export, unset, env, exit.

![C](https://img.shields.io/badge/C-a?style=for-the-badge&logo=C&color=grey)
![LINUX](https://img.shields.io/badge/Linux-a?style=for-the-badge&logo=linux&color=grey)

## Installing and running the project:

> ℹ️ Make sure you have *readline* library install on your computer. To install *readline* go see [WIKI](https://github.com/MGuardia10/42cursus_minishell/wiki/How-to-install-Readline).

1- Clone this repository
	
	git clone https://github.com/raaulalonso/minishell.git minishell
2- Navigate to the new directory and run `make`
	
	cd minishell
   	make
3- Start the shell, no parameters needed:

	./minishell

## Compiling the Program
The minishell program comes with a Makefile that includes the following rules:

- `all`: compiles the program.
- `re`: recompiles the program.
- `clean`: removes obj directory with objects files.
- `fclean`: removes obj directory with objects files and minishell binary.

## Preview
![minishell GIF](https://github.com/MGuardia10/42cursus_minishell/assets/105164870/8438c2fc-c8fd-4971-ab83-6e5ac8b2dc16)

## Disclaimer
> At [42School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the [Norm](https://github.com/42School/norminette/blob/a9e1a3dde004b4f997194b3594292a7ee6eb49b3/pdf/en.norm.pdf), the school's coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.
