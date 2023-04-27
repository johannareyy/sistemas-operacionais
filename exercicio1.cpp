//taboada
#include 
#include 
#include 
#include 
#include
int main(){

system("clear"); // ou system("cls") no windows

struct sysinfo info;

sysinfo(&info);

if(sysinfo(&info) != 0){
printf("Erro ao obter informações do sistema\n");
} else {
printf("Tempo de boot do sistema: %ld segundos\n", info.uptime);
printf("Total de memória RAM: %ld Mbytes\n", info.totalram/1024/1024);
printf("Memóroa RAM livre: %ld Mbytes\n", info.freeram/1024/1024);
}
return 0;
}