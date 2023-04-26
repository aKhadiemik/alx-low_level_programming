#include "main.h"
#include <string.h>

/**
 * main - check the code
 * description: displays the information contained in
 * the ELF header at the start of an ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int file_descriptor;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (EXIT_FAILURE);
	}

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory\n");
		return (EXIT_FAILURE);
	}

	if (read(file_descriptor, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Unable to read file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		return (EXIT_FAILURE);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
		   header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
		   header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);
	printf("  Class:							 %s\n",
		   header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:								 %s\n",
		   header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian"
		   : "2's complement, big endian");
	printf("  Version:							 %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:							 %s\n",
		   header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V"
		   : "UNIX - System V");
	printf("  ABI Version:						 %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:								 %s\n",
		   header->e_type == ET_EXEC ? "EXEC (Executable file)"
		   : "DYN (Shared object file)");
	printf("  Entry point address:				 0x%lx (bytes into file)\n",
			header->e_entry);
	printf("  Number of program headers:		%d\n", header->e_phnum);
	printf("  Size of section headers:			 %d (bytes)\n", header->e_shentsize);

	return (0);
}
