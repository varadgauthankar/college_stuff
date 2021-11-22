#include <stdio.h>
#include <stdlib.h>

void main()

{
	int a[30], c[30], d[30], e[30], i, nol = 0, fin;
	char b[30], line[80];
	FILE *file;
	file = fopen("out.txt", "r");

	while (fgets(line, 80, file) != NULL)

		nol++;
	fclose(file);
	file = fopen("out.txt", "r");

	while (!feof(file))
	{
		for (i = 0; i < nol; i++)
		{
			fscanf(file, "%d %c %d %d %d", &a[i], &b[i], &c[i], &d[i], &e[i]);
		}
	}

	for (i = 0; i < nol; i++)

		printf("\n%d\t%c\t%d\t%d\t%d\t", a[i], b[i], c[i], d[i], e[i]);

	for (i = 0; i < nol; i++)

	{
		if (a[i] != i + 1)
		{

			printf("cannot reassembly -a incorrectpacket");
			exit(1);
		}
	}

	for (i = 0; i < nol - 1; i++)
	{
		if (b[i] != b[i + 1])

		{
			printf("\ncannot reassembly b -incorrect packet");
			exit(1);
		}
	}

	for (i = 0; i < nol - 1; i++)

	{
		if ((c[i] != 1) || (c[nol - 1] != 0))

		{
			printf("\ncannot reassembly c- incorrect packet");
			exit(1);
		}
	}

	for (i = 0; i < nol - 2; i++)
	{
		if (e[i] != e[i + 1])

		{
			printf("\ncannot reassembly -e incorrect packet ");
			exit(1);
		}
	}

	fin = 0;
	for (i = 1; i < nol; i++)

	{
		if (d[i] != fin + e[i])

		{
			printf("\ncannot reassembly -d incorrect packet");
			exit(1);
		}

		else

		{
			fin = d[i];
		}
	}

	printf("\n packet reassembled\n");
	printf("size of packets = %d", d[nol - 1]);

	fclose(file);
}
