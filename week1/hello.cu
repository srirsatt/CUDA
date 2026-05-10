// to activate CUDA: conda activate cuda-dev

#include <cstdio>
#include <cuda_runtime.h>


__global__ void helloWorld() {
    printf("Hello from the GPU!");
}

int main() {
    helloWorld<<<1, 1>>>();

    cudaDeviceSynchronize();
    return 0;
}