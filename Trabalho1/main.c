/**
 * @ Author: Marcus Vinícius Medeiros Pará 11031663
 * @		 Maria Eduarda Kawakami Moreira 11218751
 * @ Create Time: 2020-05-08 18:31:38
 */

#include <stdio.h>
#include <string.h>
#include "lib/manage_bin/manage_bin.h"
#include "lib/manage_csv/manage_csv.h"
#include "lib/binarioNaTela/binarioNaTela.h"
#include "lib/funcionalidades/funcionalidades.h"

int main(int argc, char const *argv[])
{
    Cabecalho* cab = NULL;
    int input_op;
    char path_1[100];
    char path_2[100];

    scanf("%d%s", &input_op, path_1);
    switch (input_op)
    {
    case 1:
        scanf("%s", path_2);
		funcionalidade1(path_1, path_2, cab);
		break;
    case 2:
        funcionalidade2(path_1, cab);
        break;
    default:
        break;
    }
    
    return 0;
}