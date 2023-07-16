Arquivos

//A seguir s�o apresentadas as principais fun��es de
//manipula��o de arquivos, presentes na biblioteca stdio.h:

fopen:

//Abre um arquivo

fclose:

//Fecha um arquivo

putc ou fputc:

//Escreve um caracter em um arquivo

getc ou fgetc:

//L� um caractere de um arquivo

fseek:

//Posiciona o cursos em determinado registro de um arquivo

fprintf:

//Efetua impress�o formatada em um arquivo

fscanf:

//Efetua leitura formatada em um arquivo

feof:

//Verifica o final de um arquivo

fwrite:

//Escreve �v�rios� bytes de uma s� vez em um arquivo

fread:

//L� �v�rios� bytes de uma s� vez de um arquivo

Abertura de Arquivos

"r"
//Abre um arquivo texto para leitura.

//O arquivo deve existir antes de ser aberto.

"w"
//Abre um arquivo texto para grava��o.

//Se o arquivo n�o existir, ele ser� criado. Se j� existir, o conte�do anterior ser� destru�do.

"a"
//Abre um arquivo texto para grava��o; por�m, os dados ser�o adicionados
//no fim do arquivo (append), se ele j� existir, ou um novo arquivo ser�
//criado.

"rb"
//Abre um arquivo bin�rio para leitura (equivalente ao modo �r�, por�m
//aplicado a arquivos bin�rios).

"wb"
//Abre um arquivo bin�rio para grava��o (equivalente ao modo �w�,
//por�m aplicado a arquivos bin�rios).

"ab"
//Abre um arquivo bin�rio para grava��o; por�m, os dados ser�o
//adicionados no fim do arquivo (equivalente ao modo �a�, por�m aplicado
//a arquivos bin�rios).
