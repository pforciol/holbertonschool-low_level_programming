#include "holberton.h"

/**
 * handle_exit - handles the exit errors
 *
 * @message: message to print
 */

void	handle_exit(char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * is_elf_file - checks if it's an elf file
 *
 * @h: the header structure
 */

void	is_elf_file(Elf32_Ehdr *h)
{
	if (h->e_ident[EI_MAG0] == ELFMAG0			/* 0x7f */
			&& h->e_ident[EI_MAG1] == ELFMAG1	/* 'E'  */
			&& h->e_ident[EI_MAG2] == ELFMAG2	/* 'L'  */
			&& h->e_ident[EI_MAG3] == ELFMAG3)	/* 'F'  */
		return;
	handle_exit("Error: The requested file isn't an ELF file");
}

/**
 * display_elf_magic - display_elf_magic
 *
 * @h: the header structure
 */

void	display_elf_magic(Elf32_Ehdr *h)
{
	int i = 0;

	printf("  %s", "Magic:   ");
	while (i < EI_NIDENT)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", h->e_ident[i++]);
	}
	printf("\n");
}

/**
 * display_elf_class - display_elf_class
 *
 * @class: the class
 */

void	display_elf_class(unsigned char class)
{
	printf("  %-35s", "Class:");
	if (class == ELFCLASSNONE)
		printf("INVALID");
	else if (class == ELFCLASS32)
		printf("ELF32");
	else if (class == ELFCLASS64)
		printf("ELF64");
	else
		printf("<unknown: %x>", class);
	printf("\n");
}

/**
 * display_elf_data - display_elf_data
 *
 * @data: the data
 */

void	display_elf_data(unsigned char data)
{
	printf("  %-35s", "Data:");
	if (data == ELFDATANONE)
		printf("INVALID");
	else if (data == ELFDATA2LSB)
		printf("2's complement, little endian");
	else if (data == ELFDATA2MSB)
		printf("2's complement, big endian");
	else
		printf("<unknown: %x>", data);
	printf("\n");
}

/**
 * display_elf_version - display_elf_version
 *
 * @version: the version
 */

void	display_elf_version(unsigned char version)
{
	printf("  %-35s", "Version:");
	if (version == EV_NONE)
		printf("(invalid)");
	else if (version == EV_CURRENT)
		printf("%d (current)", version);
	else
		printf("%d", version);
	printf("\n");
}

/**
 * display_elf_osabi - display_elf_osabi
 *
 * @osabi: the osabi
 */

void	display_elf_osabi(unsigned char osabi)
{
	printf("  %-35s", "OS/ABI:");
	if (osabi == ELFOSABI_NONE || osabi == ELFOSABI_SYSV)
		printf("UNIX - System V");
	else if (osabi == ELFOSABI_HPUX)
		printf("UNIX - HP-UX");
	else if (osabi == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD");
	else if (osabi == ELFOSABI_LINUX)
		printf("UNIX - Linux");
	else if (osabi == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris");
	else if (osabi == ELFOSABI_IRIX)
		printf("UNIX - IRIX");
	else if (osabi == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD");
	else if (osabi == ELFOSABI_TRU64)
		printf("UNIX - TRU64");
	else if (osabi == ELFOSABI_ARM)
		printf("UNIX - ARM");
	else if (osabi == ELFOSABI_STANDALONE)
		printf("UNIX - Stand-alone");
	else
		printf("<unknown: %x>", osabi);
	printf("\n");
}

/**
 * display_elf_type - display_elf_type
 *
 * @type: the type
 * @be: if big endian 1, else 0
 */

void	display_elf_type(uint16_t type, int be)
{
	printf("  %-35s", "Type:");

	if (be == 1)
		type = type >> 8;

	if (type == ET_NONE)
		printf("UNKNOWN (Unknown file)");
	else if (type == ET_REL)
		printf("REL (Relocatable file)");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)");
	else if (type == ET_CORE)
		printf("CORE (Core file)");
	else
		printf("<unknown: %x>", type);
	printf("\n");
}

/**
 * display_elf_entry - display_elf_entry
 *
 * @addr: the address of the entry point
 * @be: big endian (1 if yes, 0 else)
 */

void	display_elf_entry(Elf64_Addr addr, int be)
{
	if (be == 1)
		addr = ((addr >> 24) & 0x000000ff)
		| ((addr >> 8) & 0x0000ff00)
		| ((addr << 8) & 0x00ff0000)
		| ((addr << 24) & 0xff000000);
	printf("  %-35s%#lx\n", "Entry point address:", addr);
}

/**
 * display_elf - display_elf
 *
 * @h: the header structure
 */

void	display_elf(Elf32_Ehdr *h)
{
	is_elf_file(h);
	printf("ELF Header:\n");
	display_elf_magic(h);
	display_elf_class(h->e_ident[EI_CLASS]);
	display_elf_data(h->e_ident[EI_DATA]);
	display_elf_version(h->e_ident[EI_VERSION]);
	display_elf_osabi(h->e_ident[EI_OSABI]);
	printf("  %-35s%d\n", "ABI Version:", h->e_ident[EI_ABIVERSION]);
	display_elf_type(h->e_type,
			(h->e_ident[EI_DATA] == ELFDATA2MSB) ? 1 : 0);
	display_elf_entry(h->e_entry,
			(h->e_ident[EI_DATA] == ELFDATA2MSB) ? 1 : 0);
}

/**
 * main - entry point of our program
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 0
 */

int		main(int ac, char **av)
{
	Elf32_Ehdr *header;
	int fd = 0;
	ssize_t bytes = 0;

	if (ac != 2)
		handle_exit("Usage: elf_header elf_filename");

	header = malloc(sizeof(Elf32_Ehdr));
	fd = open(av[1], O_RDONLY);
	if (header && fd > -1)
	{
		if (lseek(fd, 0, SEEK_SET) != 0)
			handle_exit("Error: Can't find the header of the requested file");
		bytes = read(fd, header, sizeof(Elf32_Ehdr));
		if (bytes == -1)
			handle_exit("Error: Can't read the header of the requested file");
		display_elf(header);
		if (close(fd) != 0)
			handle_exit("Error: Can't close the current file directory");
		free(header);
		return (0);
	}
	handle_exit("Error: Can't open the requested ELF file");
	return (0);
}
