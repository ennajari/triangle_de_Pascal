#include <stdio.h>

// Fonction pour calculer les coefficients binomiaux
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Fonction pour afficher le triangle de Pascal
void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        // Imprimer les espaces pour aligner les rangées
        for (int j = 0; j < numRows - i; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    printf("Entrez le nombre de lignes pour le triangle de Pascal : ");
    scanf("%d", &numRows);

    printPascalTriangle(numRows);

    return 0;
}
