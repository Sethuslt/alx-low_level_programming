#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <elf.h>

void close_elf(int elf);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_type(unsigned char int e_type, unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);

/**
 * check_elf - this helps check ELF FILE.
 * @e_ident: this refers to a pointer to an array that has
 * ELF magic numbers
 *
 *
 * Description: exit code 98 with a condition ,
 * that file if not ELF
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4 ; i++)
	{
		if (e_ident[i] != 127 &&
		e_ident[i] != 'E' &&
		e_ident[i] != 'L' &&
		e_ident[i] != 'F')
		{
			printf(STDERR_FILENO, "Error: Not an ELF FILE\n");
			exit(98);
		}
	}
}
/**
 * print_magic - this prints on ELF header the magic number
 * @e_ident: this refers to a pointer of array 
 * Description: the magic Numbers are separated by spaces
 *
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - this is where the class of ELF header is printed
 * @e_ident: this refers to a pointer of array that has the ELF Class
 *
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:		");

	switch (e_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - this is where the data of the ELF header is printed
 *
 * @e_ident: this refers to a pointer of array that has the ELF Class
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:		");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none.\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unkown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_version - this is where the version of the ELF header is printed
 *
 * @e_ident: this refers to a pointer to an array that has ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:		%d",
		e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
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
 * print_osabi - this prints the OS/ABI of an ELF header
 *
 * @e_ident: a pointer an array that has the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	switch (e_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}




