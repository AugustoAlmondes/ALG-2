// 9. Faça um algoritmo que leia 3 notas de cada aluno em uma turma de 20 alunos e mostre: a 
// média de cada aluno, a média da turma e o percentual de alunos que tiveram média acima de 
// 7,0.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3, mediaAluno, mediaTurma, somaMedias=0, countMediaAlunos;
    int qtdAlunos=2;

    for (int i = 1; i <= qtdAlunos; i++){
        printf("Digite as 3 notas do aluno %d: ", i);
        scanf("%f %f %f", &n1, &n2, &n3);

        mediaAluno = (n1+n2+n3)/3;

        printf("media do aluno %d: %.1f\n", i, mediaAluno);

        if (mediaAluno > 7.0){
            countMediaAlunos++;
        }
        somaMedias = somaMedias + mediaAluno;
        
    }
    mediaTurma = somaMedias/qtdAlunos;

    printf("Média da turma: %.2f\n", mediaTurma);
    printf("Percentual de alunos com média acima de 7: %.2f%%\n", (countMediaAlunos/qtdAlunos));

    return 0;
}
