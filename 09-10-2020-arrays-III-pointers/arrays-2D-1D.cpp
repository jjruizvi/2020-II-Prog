#include <iostream>
#include <vector>


void fill(double data[], const int sizex, const int sizey);
void print(double data[], const int sizex, const int sizey);
void transpose(double data[], double dataT[], const int sizex, const int sizey);


int main(int argc, char **argv)
{
    // declarar variables
    const int M = 5; // rows
    const int N = 4; // colums
    double matrix[M*N] {0.0};
    
    //std::vector<std::vector<double>> data(M); //un vector de vectores
    //for(int ix = 0; ix < M; ix++){            //pero el vector en cada fila
    //    data[ix].resize(N);                   //no esta inicializado por lo
    //}                                         //debemos asignarle el tamaño 
                                              //N que son nuestras colomnas.
    // llenar
    fill(matrix, M, N);
    
    // transponer
    double matrixT [N*M] {0.0};
    transpose(matrix, matrixT, M, N);

    //imprimir
    print(matrix, M, N);
    print(matrixT, N, M);

    return 0;
    
}

void fill(double data[], const int sizex, const int sizey)
{
    for (int ix = 0; ix < sizex; ++ix) {
        for (int iy = 0; iy < sizey; ++iy) {
          //  data[ix][iy] = ix*sizey + iy;
            data[ix*sizey + iy] = ix*sizey + iy;
        }                                    
    }       
}

void print (double data[], const int sizex, const int sizey)
{
    for (int ix = 0; ix < sizex; ++ix) {
        for (int iy = 0; iy < sizey; ++iy) {
            std::cout << data[ix*sizey + iy] << " ";
        }
        std::cout << "\n";
    }
}


void transpose(double data[], double dataT[], const int sizex, const int sizey)
{
    for (int ix = 0; ix < sizex; ++ix) {
        for (int iy = 0; iy < sizey; ++iy) {
            dataT[iy*sizex + ix] = data[ix*sizey + iy];
        }
    }
}


