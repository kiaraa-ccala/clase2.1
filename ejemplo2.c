#include <stdio.h>
#include <stdlib.h>


void ini_vector(float *arreglo, int N);
void suma_compleja(float *real, float *imag, float *suma_real, float *suma_imag, int N); 
int main(){
    int N = 4; /// numero de elementos del arreglo
    float *real =(float *)malloc(N*sizeof(float));  //sizeof es el tamaño del float
    float *imag =(float *)malloc(N*sizeof(float));  // se le hace el cast a float * para reservar un espacio de N por el tamaño de float y que eso se llame float
    float suma_imag = 0;
    float suma_real = 0;
    ini_vector(real, N);
    ini_vector(imag, N);
    suma_compleja(real, imag, &suma_real, &suma_imag, N);
    for (int i=0 ; i<N ; i++){
        printf("%.2f + %.2fi\n", real[i], imag[i]);
    }
    printf("\n");
// malloc reserva tantos bytes, necesita ser casteada

    printf("El resultado de la suma es %.2f + %.2f i\n", suma_real,suma_imag);
    free(real);
    free(imag);
}

void ini_vector(float *arreglo, int N){
    for (int i = 0; i<N; i++){
        arreglo[i]=(i+1)*9/10;
    }

}

void suma_compleja(float *real, float *imag, float *suma_real, float *suma_imag, int N){
    for (int i = 0; i < N; i++){
        suma_real[0] = suma_real[0] + real[i];
        suma_imag[0] = suma_imag[0] + imag[i];
    }
}
