#include <stdio.h>

int main() {
int a[2][2], b[2][2], c[2][2];

// INPUT
printf("Enter Matrix A:\n");
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
scanf("%d",&a[i][j]);

printf("Enter Matrix B:\n");
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
scanf("%d",&b[i][j]);

// ADDITION
printf("\nAddition of matrices:\n");
for(int i=0;i<2;i++) {
for(int j=0;j<2;j++) {
c[i][j] = a[i][j] + b[i][j];
printf("%d ", c[i][j]);
}
printf("\n");
}

// SADDLE POINT


int saddle, found = 0;

for(int i=0;i<2;i++) {
int min = a[i][0], col = 0;

// find row minimum
for(int j=1;j<2;j++) {
if(a[i][j] < min) {
min = a[i][j];
col = j;
}
}

// check column maximum
int flag = 1;
for(int j=0;j<2;j++) {
if(a[j][col] > min)
flag = 0;
}

if(flag) {
saddle = min; // store it
found = 1;
}
}

// print result
if(found)
printf("Saddle Point = %d\n", saddle);
else
printf("No Saddle Point\n");

// MAGIC SQUARE

int sum = 0, temp, isMagic = 1;

for(int j=0;j<2;j++)
sum += a[0][j];

for(int i=0;i<2;i++) {
temp = 0;
for(int j=0;j<2;j++)
temp += a[i][j];

if(temp != sum)
isMagic = 0;
}

for(int j=0;j<2;j++) {
temp = 0;
for(int i=0;i<2;i++)
temp += a[i][j];

if(temp != sum)
isMagic = 0;
}

if(isMagic)
printf("matrix is a magic square\n");
else
printf("Matrix is not a magic square\n");

// INVERSE
printf("\nInverse Matrix:\n");
float inv[2][2];
int det;

det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

if(det == 0) {
printf("Inverse not possible\n");
} else {
inv[0][0] = a[1][1] / (float)det;
inv[0][1] = -a[0][1] / (float)det;
inv[1][0] = -a[1][0] / (float)det;
inv[1][1] = a[0][0] / (float)det;

for(int i=0;i<2;i++) {
for(int j=0;j<2;j++)
printf("%.2f ", inv[i][j]);
printf("\n");
}
}

return 0;
}