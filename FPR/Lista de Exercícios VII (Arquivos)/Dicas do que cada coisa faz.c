Arquivos

//A seguir são apresentadas as principais funções de
//manipulação de arquivos, presentes na biblioteca stdio.h:

fopen:

//Abre um arquivo

fclose:

//Fecha um arquivo

putc ou fputc:

//Escreve um caracter em um arquivo

getc ou fgetc:

//Lê um caractere de um arquivo

fseek:

//Posiciona o cursos em determinado registro de um arquivo

fprintf:

//Efetua impressão formatada em um arquivo

fscanf:

//Efetua leitura formatada em um arquivo

feof:

//Verifica o final de um arquivo

fwrite:

//Escreve “vários” bytes de uma só vez em um arquivo

fread:

//Lê “vários” bytes de uma só vez de um arquivo

Abertura de Arquivos

"r"
//Abre um arquivo texto para leitura.

//O arquivo deve existir antes de ser aberto.

"w"
//Abre um arquivo texto para gravação.

//Se o arquivo não existir, ele será criado. Se já existir, o conteúdo anterior será destruído.

"a"
//Abre um arquivo texto para gravação; porém, os dados serão adicionados
//no fim do arquivo (append), se ele já existir, ou um novo arquivo será
//criado.

"rb"
//Abre um arquivo binário para leitura (equivalente ao modo “r”, porém
//aplicado a arquivos binários).

"wb"
//Abre um arquivo binário para gravação (equivalente ao modo “w”,
//porém aplicado a arquivos binários).

"ab"
//Abre um arquivo binário para gravação; porém, os dados serão
//adicionados no fim do arquivo (equivalente ao modo “a”, porém aplicado
//a arquivos binários).
