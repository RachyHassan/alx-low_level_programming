#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <string.h>
/**
 * print_elf_header - prints the header info
 * @elf_header: pointer
 * Return: header info
 */

void print_elf_header(Elf64_Ehdr *elf_header)
{
	printf("Magic:   %02x %02x %02x %02x\n", elf_header->e_ident[0],
			elf_header->e_ident[1], elf_header->e_ident[2],
			elf_header->e_ident[3]);
	printf("Class:   %s\n", (elf_header->e_ident[4] == ELFCLASS64)
			? "ELF64" : "ELF32");
	printf("Data:    %s\n", (elf_header->e_ident[5] == ELFDATA2LSB)
			? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version: %d (current)\n", elf_header->e_ident[6]);
	printf("OS/ABI:  %d\n", elf_header->e_ident[7]);
	printf("ABI Ver: %d\n", elf_header->e_ident[8]);
	printf("Type:    %d\n", elf_header->e_type);
	printf("Entry:   %#lx\n", elf_header->e_entry);
}

/**
 * main- entry point
 * @argc: argument count
 * @argv: array
 * Return: Return value
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	char buffer[sizeof(Elf64_Ehdr)];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1 || (read(fd, buffer, sizeof(Elf64_Ehdr))
				!= sizeof(Elf64_Ehdr)
				|| memcmp(buffer, ELFMAG, SELFMAG) != 0))
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		return (98);
	}

	memcpy(&elf_header, buffer, sizeof(Elf64_Ehdr));


	lseek(fd, 0, SEEK_SET);
	read(fd, buffer, sizeof(Elf64_Ehdr));
	print_elf_header(&elf_header);
	close(fd);
	return (0);
}
