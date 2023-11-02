#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - rthe chexker for elf
 * @e_id: function thwts poinre to the qrrwy
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_id)
{
	int ind = 0;

	while (ind < 4)
	{
		if (e_id[ind] != 127 &&
		    e_id[ind] != 'E' &&
		    e_id[ind] != 'L' &&
		    e_id[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		ind++;
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_id)
{
	int ind = 0;

	printf("  Magic:   ");

	while (ind < EI_NIDENT)
	{
		printf("%02x", e_id[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		ind++;
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_id: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_id)
{
	printf("  Class:                             ");

	switch (e_id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_id: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_id)
{
	printf("  Data:                              ");

	switch (e_id[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_id: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_id)
{
	printf("  Version:                           %d",
	       e_id[EI_VERSION]);

	switch (e_id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_id: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *e_id)
{
	printf("  OS/ABI:                            ");

	switch (e_id[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_id: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_id)
{
	printf("  ABI Version:                       %d\n",
	       e_id[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_ty: The ELF type.
 * @e_id: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_ty, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		e_ty >>= 8;

	printf("  Type:                              ");

	switch (e_ty)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ty);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_ent: The address of the ELF entry point.
 * @e_id: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_ent, unsigned char *e_id)
{
	printf("  Entry point address:               ");

	if (e_id[EI_DATA] == ELFDATA2MSB)
	{
		e_ent = ((e_ent << 8) & 0xFF00FF00) |
			  ((e_ent >> 8) & 0xFF00FF);
		e_ent = (e_ent << 16) | (e_ent >> 16);
	}

	if (e_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_ent);

	else
		printf("%#lx\n", e_ent);
}

/**
 * close_elf - elf files
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - priduces the information displayed in the file
 * @argc: simplified number of argumenrs
 * @argv: pointers qnd arrays
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int fo, fr;

	fo = open(argv[1], O_RDONLY);
	if (fo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(fo);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	fr = read(fo, head, sizeof(Elf64_Ehdr));
	if (fr == -1)
	{
		free(head);
		close_elf(fo);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(head->e_ident);
	printf("ELF Header:\n");
	print_magic(head->e_ident);
	print_class(head->e_ident);
	print_data(head->e_ident);
	print_version(head->e_ident);
	print_osabi(head->e_ident);
	print_abi(head->e_ident);
	print_type(head->e_type, head->e_ident);
	print_entry(head->e_entry, head->e_ident);

	free(head);
	close_elf(fo);
	return (0);
}
